/*
Public domain termios tc[get|set]attr() for the MiNT library
10 October 1993 entropy@terminator.rs.itd.umich.edu -- first attempt
*/

#include <mintbind.h>
#include <errno.h>

#ifdef __TURBOC__
# include <sys\types.h>
# include <sys\param.h>
# include <sys\file.h>
# include <sys\ioctl.h>
# include <sys\types.h>
# include <sys\termios.h>
#else
# include <sys/types.h>
# include <sys/param.h>
# include <sys/file.h>
# include <sys/ioctl.h>
# include <sys/types.h>
# include <sys/termios.h>
#endif

#include <unistd.h>

#define VTIME_MS	100  /* count in .1 seconds */

extern int __mint;

int
tcgetattr(fd, stp)
  int fd;
  struct termios *stp;
{
  struct sgttyb sg;
  struct tchars t;
  struct ltchars lt;
  short flags;
  unsigned short vmin[2];
  long state, r;

  r = Fcntl((short) fd, (long) &sg, TIOCGETP);
  if (r < 0) {
    errno = (int) -r;
    return -1;
  }
  r = Fcntl((short) fd, (long) &t, TIOCGETC);
  if (r < 0) {
    errno = (int) -r;
    return -1;
  }
  r = Fcntl((short) fd, (long) &lt, TIOCGLTC);
  if (r < 0) {
    errno = (int) -r;
    return -1;
  }
  r = ioctl (fd, TIOCGETD, &stp->c_line);
  if (r < 0) {
    errno = ENOTTY;
    return -1;
  }
  r = Fcntl((short) fd, (long) &flags, TIOCGFLAGS);
  if (r < 0) {
    flags = 0;
  }
  r = Fcntl((short) fd, (long) &state, TIOCGSTATE);
  if (r < 0) {
    state = 0;
  }
  stp->c_iflag = (tcflag_t) (((flags & _TF_BRKINT) ? BRKINT : 0)
			| ((sg.sg_flags & CRMOD) ? ICRNL : 0)
			| ((sg.sg_flags & (EVENP | ODDP)) ? INPCK :
			 ((sg.sg_flags & RAW) ? 0 : IGNPAR)) /*keep stty happy*/
			| ((sg.sg_flags & TANDEM) ? (IXON | IXOFF) : 0)
			| ((sg.sg_flags & RAW) ? 0 : IXON));
  stp->c_oflag = (tcflag_t) (sg.sg_flags & RAW) ? 0 : OPOST;
  stp->c_cflag = (tcflag_t) (CREAD
			| ((flags & _TF_CAR) ? 0 : CLOCAL)
			| ((state & _TS_HPCL) ? HUPCL : 0)
			| (((flags & _TF_STOPBITS) == _TF_2STOP) ? CSTOPB : 0)
			| (flags & _TF_CHARBITS)
			| ((sg.sg_flags & RTSCTS) ? CRTSCTS : 0)
			| ((sg.sg_flags & EVENP) ? PARENB : 0)
			| ((sg.sg_flags & ODDP) ? (PARENB | PARODD) : 0));
  stp->c_lflag = (tcflag_t) ((sg.sg_flags & (TOSTOP | NOFLSH | ECHOCTL))
			| ((sg.sg_flags & ECHO) ? (ECHO | ECHOE | ECHOK) : 0)
			| ((sg.sg_flags & XKEY) ? IEXTEN : 0)
			| ((sg.sg_flags & RAW)
				? 0 
				: ISIG | (sg.sg_flags & CBREAK ? 0 : ICANON)));
  stp->_c_ispeed = (speed_t) sg.sg_ispeed;
  stp->_c_ospeed = (speed_t) sg.sg_ospeed;
  stp->c_cc[VEOF]	= (cc_t) t.t_eofc;
  stp->c_cc[VEOL]	= (cc_t) t.t_brkc;
  stp->c_cc[VERASE]	= (cc_t) sg.sg_erase;
  stp->c_cc[VINTR]	= (cc_t) t.t_intrc;
  stp->c_cc[VKILL]	= (cc_t) sg.sg_kill;
  stp->c_cc[VQUIT]	= (cc_t) t.t_quitc;
  stp->c_cc[VSUSP]	= (cc_t) lt.t_suspc;
  stp->c_cc[VSTART]	= (cc_t) t.t_startc;
  stp->c_cc[VSTOP]	= (cc_t) t.t_stopc;
  r = Fcntl((short) fd, (long) &vmin, TIOCGVMIN);
  if (r < 0) {
    stp->c_cc[VMIN]	= (cc_t) 1;
    stp->c_cc[VTIME]	= (cc_t) 0;
  } else {
    if (vmin[1]) {
      stp->c_cc[VMIN]	= (cc_t) 0;
      stp->c_cc[VTIME]	= (cc_t) (vmin[1] >= 0xff*VTIME_MS) ? 0xff : vmin[1]/VTIME_MS;
    } else {
      stp->c_cc[VMIN]	= (cc_t) (vmin[0] >= 0xff) ? 0xff : vmin[0];
      stp->c_cc[VTIME]	= (cc_t) 0;
    }
  }
  stp->c_cc[VLNEXT]	= (cc_t) lt.t_lnextc;
  stp->c_cc[VWERASE]	= (cc_t) lt.t_werasc;
  stp->c_cc[VDSUSP]	= (cc_t) lt.t_dsuspc;
  stp->c_cc[VREPRINT]	= (cc_t) lt.t_rprntc;
  stp->c_cc[VFLUSHO]	= (cc_t) lt.t_flushc;
  return 0;
}

int
tcsetattr(fd, action, stp)
  int fd;
  int action;
  const struct termios *stp;
{
  struct sgttyb sg;
  struct tchars t;
  struct ltchars lt;
  short flags, state;
  unsigned short vmin[2];
  long bits[2], r;

  r = Fcntl((short) fd, (long) &sg, TIOCGETP);
  if (r < 0) {
    errno = (int) -r;
    return -1;
  }
  r = Fcntl((short) fd, (long) &lt, TIOCGLTC);
  if (r < 0) {
    errno = (int) -r;
    return -1;
  }
  r = ioctl (fd, TIOCSETD, (void*) &stp->c_line);
  if (r < 0) {
    errno = ENOTTY;
    return -1;
  }
  sg.sg_flags &= ~(CRMOD | TANDEM | RTSCTS | EVENP | ODDP | TOSTOP 
			| NOFLSH | ECHOCTL | RAW | CBREAK | ECHO | XKEY);
  sg.sg_flags |= (((stp->c_iflag & ICRNL) ? CRMOD : 0)
			| (((stp->c_iflag & (IXON | IXOFF)) == (IXON | IXOFF)) ? TANDEM : 0)
			| ((stp->c_cflag & CRTSCTS) ? RTSCTS : 0));
  flags = ((stp->c_cflag & CSTOPB) ? _TF_2STOP : _TF_1STOP) |
		((stp->c_cflag & CLOCAL) ? 0 : _TF_CAR) |
		((stp->c_iflag & BRKINT) ? _TF_BRKINT : 0) |
		(stp->c_cflag & CSIZE);
  state = (stp->c_cflag & HUPCL) ? _TS_HPCL : 0;
  sg.sg_flags |= ((stp->c_cflag & PARENB)
			? ((stp->c_cflag & PARODD) ? ODDP : EVENP)
			: 0);
  sg.sg_flags |= ((stp->c_lflag & (TOSTOP | NOFLSH | ECHOCTL | ECHO))
			| ((stp->c_lflag & IEXTEN) ? XKEY : 0)
			| ((stp->c_lflag & ISIG)
			   ? (stp->c_lflag & ICANON ? 0 : CBREAK) : RAW));
  sg.sg_ispeed = (char) stp->_c_ispeed;
  sg.sg_ospeed = (char) stp->_c_ospeed;
  t.t_eofc 		= (char) stp->c_cc[VEOF];
  t.t_brkc		= (char) stp->c_cc[VEOL];  
  sg.sg_erase		= (char) stp->c_cc[VERASE];
  t.t_intrc		= (char) stp->c_cc[VINTR];
  sg.sg_kill		= (char) stp->c_cc[VKILL];
  t.t_quitc		= (char) stp->c_cc[VQUIT];
  lt.t_suspc		= (char) stp->c_cc[VSUSP];
  t.t_startc		= (char) stp->c_cc[VSTART];
  t.t_stopc		= (char) stp->c_cc[VSTOP];
  if (stp->c_cc[VMIN]) {
  /* have to ignore VTIME when VMIN is set, some programs rely on it... */
    vmin[0]		= (unsigned char) stp->c_cc[VMIN];
    vmin[1]		= 0;
  } else {
    vmin[0]		= (unsigned char) 1;
    vmin[1]		= (unsigned short) stp->c_cc[VTIME] * VTIME_MS;
  }
  lt.t_lnextc		= (char) stp->c_cc[VLNEXT];
  lt.t_werasc		= (char) stp->c_cc[VWERASE];
  lt.t_dsuspc		= (char) stp->c_cc[VDSUSP];
  lt.t_rprntc		= (char) stp->c_cc[VREPRINT];
  lt.t_flushc		= (char) stp->c_cc[VFLUSHO];
  switch (action)
  {
    case TCSAFLUSH:
      tcflush(fd, TCIFLUSH);
      /* fall through */
    case TCSADRAIN:
      r = Fcntl((short) fd, (long) &sg, __mint < 0x10b ? TIOCSETN : TIOCSETP);
      if (r < 0) {
        errno = (int) -r;
        return -1;
      }
      break;
    case TCSANOW:
      r = Fcntl((short) fd, (long) &sg, TIOCSETN);
      if (r < 0) {
        errno = (int) -r;
        return -1;
      }
      break;
    default:
      errno = EINVAL;
      return -1;
  }
  r = Fcntl((short) fd, (long) &t, TIOCSETC);
  if (r < 0) {
    errno = (int) -r;
    return -1;
  }
  r = Fcntl((short) fd, (long) &lt, TIOCSLTC);
  if (r < 0) {
    errno = (int) -r;
    return -1;
  }
  bits[0] = (unsigned)flags;
  bits[1] = _TF_STOPBITS | _TF_CHARBITS | _TF_CAR | _TF_BRKINT;
  r = Fcntl((short) fd, (long) &bits, TIOCSFLAGSB);
  if (r < 0) {
    short sflags = 0;
    (void) Fcntl((short) fd, (long) &sflags, TIOCGFLAGS);
    sflags &= ~(_TF_STOPBITS | _TF_CHARBITS);
    sflags |= flags & (_TF_STOPBITS | _TF_CHARBITS);
    (void) Fcntl((short) fd, (long) &sflags, TIOCSFLAGS);
  }
  (void) Fcntl((short) fd, (long) &vmin, TIOCSVMIN);
  bits[0] = (unsigned)state;
  bits[1] = _TS_HPCL;
  (void) Fcntl((short) fd, (long) &bits, TIOCSSTATEB);
  return 0;
}
