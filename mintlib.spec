# mintlib.spec.in -- MiNTLib.
# Copyright (C) 2000 Guido Flohr <guido@freemint.de>
#
# This file is part of the MiNTLib project, and may only be used
# modified and distributed under the terms of the MiNTLib project
# license, COPYMINT.  By continuing to use, modify, or distribute
# this file you indicate that you have read the license and
# understand and accept it fully.
#
# If the name of this file is mintlib.spec don't edit it, edit
# mintlib.spec.in instead.  You can then generate the actual spec
# file mintlib.spec by typing `make mintlib.spec' in the top-level
# directory of the MiNTLib source tree.
#
# There is some crude (and untested!) support for building the library
# on another platform for cross-compiling MiNT applications.  Since the
# package name mintlib will not conflict with other packages on the
# cross platform (like gcc or binutils would) we abuse the cross-rpm
# feature here and simply presume that you want to build a cross-lib
# if not building on a MiNT machine.
Name: mintlib
Summary: Necessary files from the MiNTLib
Group: Base
Version: 0.55.3
Release: 1
Copyright: distributable
Source: %{name}-%{version}.tar.gz
Buildroot: /var/tmp/mintlib-root
Prefix: %{_prefix}
Packager: Guido Flohr <guido@freemint.de>
Vendor: Sparemint
Requires: pdksh gawk
Summary(de): Unbedingt ben�tigte Dateien aus der MiNTLib

%ifnarch m68kmint
%define crossprefix /m68k-atari-mint
%else
%define crossprefix /
%endif

%package devel
Summary: Headers and static libraries for developping MiNT applications.
Summary(de): Header und statische Bibliotheken zur Entwicklung von MiNT-Software.
Group: Development/Libraries/Libc
%ifarch m68kmint
# Actually this does not depend on the architecture but on the distribution.
# Since there is no known distribution/archive except Sparemint the above 
# condition makes sense.
Requires: mintlib binutils gcc >= 2.95.2
Obsoletes: mintnet-devel
Conflicts: bzip2 < 0.9.5d-2
Conflicts: cflib < 11m-3
Conflicts: cracklib < 2.7-3
Conflicts: e2fsprogs-devel < 1.14-6
Conflicts: flex < 2.5.4a-5
Conflicts: freetype-devel < 1.2-5
Conflicts: gdbm < 1.7.3-4
Conflicts: gettext < 0.10.35-4
Conflicts: libjpeg-devel < 6b-3
Conflicts: libmikmod-devel < 3.1.6-5
Conflicts: libpng < 1.0.1-4
Conflicts: libtermcap-devel < 2.0.8-4
Conflicts: libtiff-devel < 3.4-3
Conflicts: mintdb < 1.85-5
Conflicts: mintnet < 1.04-4
Conflicts: ncurses-devel < 4.2-9
Conflicts: newt-devel < 0.50-4
Conflicts: pml < 2.03-3
Conflicts: popt < 1.3-4
Conflicts: readline-devel < 2.2.1-5
#Conflicts: rpm-devel < 3.0.2-7  # Not possible right now.
Conflicts: slang < 1.2.2-3
#Conflicts: tetex < 1.0.6-2
Conflicts: w3c-libwww-devel < 5.2.8-3
Conflicts: zlib-devel < 1.1.3-5
%endif

%package debug
Summary: MiNTLib libs with debugging information
Summary(de): MiNTLib-Bibliotheken mit Debug-Informationen.
Group: Development/Libraries/Libc
Requires: mintlib-devel

%package profile
Summary: MiNTLib libs with profiling information
Summary(de): MiNTLib-Bibliotheken mit Profiling-Informationen.
Group: Development/Libraries/Libc
Requires: mintlib-devel

%package mshort
Summary: MiNTLib libs with 16 bit int type (obsolete!)
Summary(de): MiNTLib-Bibliotheken mit 16-Bit-Integern (obsolet!)
Group: Development/Libraries/libc
Requires: mintlib-devel

%ifarch m68kmint
%description
These are basic files from the MiNTLib distribution, needed by everybody,
not only programmers.  It contains the timezone database and tools to
manipulate it, tzinit, a program that sets kernel time-keeping information
and the documentation for the MiNTLib.

Not installing this package is probably a bad idea.  Many programs won't
work correctly without it.

Maintainer/Bug reports:
=======================
    Guido Flohr <guido@freemint.de>

Authors:
========
    Allison Warwick (warwick@cs.uq.oz.au)
    Andreas Schwab (schwab@suse.de)
    Arthur David Olson (arthur_david_olson@nih.gov)
    Bjarne Pohlers (bjarne@goedel.uni-muenster.de)
    Bradley White (bww@k.gp.cs.cmu.edu)
    Christian Felsch (Christian_Felsch@hh.maus.de)
    Cristof Stadler (Cristof_Stadler@s2.maus.de)
    Dirk Haun (Dirk_Haun@wi2.maus.de)
    Eric R. Smith (ersmith@netcom.com)
    Frank Bartels (knarf@nasim.cube.net)
    Frank Baumgart (Frank_Baumgart@pb.maus.de)
    Frank Naumann (fnaumann@freemint.de)
    Frank Rossien (Frank_Rossien@s2.maus.de)
    Grant Sullivan (grant@osf.org)
    Guido Flohr (guido@freemint.de)
    Guy Harris (guy@auspex.com)
    Hildo Biersma (boender@dutiws.twi.tudelft.nl)
    Howard Chu (hyc@hanauma.Jpl.Nasa.Gov)
    Jan-Hinrich "Oskar" Fessel (Jan-Hinrich_Fessel@un.maus.de)
    J�rg Westheide (Joerg_Westheide@su.maus.de)
    J�rgen Lock (nox@jelal.nasim.cube.net)
    Jwahar Bammi (bammi@cadence.com)
    Kay Roemer (roemer@informatik.uni-frankfurt.de)
    Konrad "Draco" Koskoszkiewicz (draco@mi.com.pl)
    Leif (pvt1-117@nada.kth.se)
    Markus Kilbinger (Markus_Kilbinger@ac.maus.de)
    Martin Koehling (mk@anuurn.do.open.de)
    Michael Hohmuth (hohmuth@freia.inf.tu-dresden.de)
    Michal Jaegermann (NTOMCZAK@vm.ucs.UAlberta.CA)
    Nick Castellano (entropy@terminator.rs.itd.umich.edu)
    Ole Arndt (Ole_Arndt@f.maus.de)
    Paul Eggert (eggert@twinsun.com)
    Robert Wilhelm (robert@gaston.nasim.cube.net)
    Scott Bigham (dsb@cs.duke.edu)
    Simon Gornall (sjg@phlem.ph.kcl.ac.uk)
    Stefan Steyer (dc4i@br0.hrz.th-darmstadt.de)
    Stephen Henson (shenson@nyx.cs.du.edu)
    Timothy Gallivan (timg@lifshitz.ph.utexas.edu)
    Ulf ??? (ulf@wolfhh.hanse.de)
    Ulf Moeller (Ulf_Moeller@hh2.maus.de)
    Ulrich Drepper (drepper@cygnus.com)
    Ulrich Kuehn (kuehn@goedel.uni-muenster.de)
    Uwe Ohse (Uwe_Ohse@pb2.maus.de)
    Wolfgang Lux (LUX%DHDIBM1.BITNET@vm.gmd.de)

%description -l de
Dies sind die grundlegenden Dateien aus der MiNTLib-Distribution, die
von allen ben�tigt werden. Enthalten ist z. B. die Zeitzonen-Datenbank
und Werkzeuge, die diese manipulieren. Au�erdem auch tzinit, ein
Progr�mmchen, das die Kernel-Zeitfunktionen manipuliert, ferner die
Dokumentation f�r die MiNTLib.


Verantwortlicher/Fehlerberichte:
================================
    Guido Flohr <guido@freemint.de>

Autoren:
========
    Allison Warwick (warwick@cs.uq.oz.au)
    Andreas Schwab (schwab@suse.de)
    Arthur David Olson (arthur_david_olson@nih.gov)
    Bjarne Pohlers (bjarne@goedel.uni-muenster.de)
    Bradley White (bww@k.gp.cs.cmu.edu)
    Christian Felsch (Christian_Felsch@hh.maus.de)
    Cristof Stadler (Cristof_Stadler@s2.maus.de)
    Dirk Haun (Dirk_Haun@wi2.maus.de)
    Eric R. Smith (ersmith@netcom.com)
    Frank Bartels (knarf@nasim.cube.net)
    Frank Baumgart (Frank_Baumgart@pb.maus.de)
    Frank Naumann (fnaumann@freemint.de)
    Frank Rossien (Frank_Rossien@s2.maus.de)
    Grant Sullivan (grant@osf.org)
    Guido Flohr (guido@freemint.de)
    Guy Harris (guy@auspex.com)
    Hildo Biersma (boender@dutiws.twi.tudelft.nl)
    Howard Chu (hyc@hanauma.Jpl.Nasa.Gov)
    Jan-Hinrich "Oskar" Fessel (Jan-Hinrich_Fessel@un.maus.de)
    J�rg Westheide (Joerg_Westheide@su.maus.de)
    J�rgen Lock (nox@jelal.nasim.cube.net)
    Jwahar Bammi (bammi@cadence.com)
    Kay Roemer (roemer@informatik.uni-frankfurt.de)
    Konrad "Draco" Koskoszkiewicz (draco@mi.com.pl)
    Leif (pvt1-117@nada.kth.se)
    Markus Kilbinger (Markus_Kilbinger@ac.maus.de)
    Martin Koehling (mk@anuurn.do.open.de)
    Michael Hohmuth (hohmuth@freia.inf.tu-dresden.de)
    Michal Jaegermann (NTOMCZAK@vm.ucs.UAlberta.CA)
    Nick Castellano (entropy@terminator.rs.itd.umich.edu)
    Ole Arndt (Ole_Arndt@f.maus.de)
    Paul Eggert (eggert@twinsun.com)
    Robert Wilhelm (robert@gaston.nasim.cube.net)
    Scott Bigham (dsb@cs.duke.edu)
    Simon Gornall (sjg@phlem.ph.kcl.ac.uk)
    Stefan Steyer (dc4i@br0.hrz.th-darmstadt.de)
    Stephen Henson (shenson@nyx.cs.du.edu)
    Timothy Gallivan (timg@lifshitz.ph.utexas.edu)
    Ulf ??? (ulf@wolfhh.hanse.de)
    Ulf Moeller (Ulf_Moeller@hh2.maus.de)
    Ulrich Drepper (drepper@cygnus.com)
    Ulrich Kuehn (kuehn@goedel.uni-muenster.de)
    Uwe Ohse (Uwe_Ohse@pb2.maus.de)
    Wolfgang Lux (LUX%DHDIBM1.BITNET@vm.gmd.de)

%else
%description
This package allows to use the MiNTLib libraries for cross-compiling.
Of course you also need to install adequate cross tools like cross
linker, cross assembler and not to forget a cross compiler. Both the
binutils (linker and assembler) and the cross compiler (preferably
gcc) can be built for the target mint with the native compiler on
the cross platform.
 
This package itself contains only docs.  The headers are contained in
the package mintlib-devel.  So are the standard static libraries.
You have to install both the libraries and the headers before you
start to build the cross compiler (unless the cross compiler is also
available as binary rpm).

Maintainer/Bug reports:
=======================
    Guido Flohr <guido@freemint.de>

Authors:
========
    Allison Warwick (warwick@cs.uq.oz.au)
    Andreas Schwab (schwab@suse.de)
    Arthur David Olson (arthur_david_olson@nih.gov)
    Bjarne Pohlers (bjarne@goedel.uni-muenster.de)
    Bradley White (bww@k.gp.cs.cmu.edu)
    Christian Felsch (Christian_Felsch@hh.maus.de)
    Cristof Stadler (Cristof_Stadler@s2.maus.de)
    Dirk Haun (Dirk_Haun@wi2.maus.de)
    Eric R. Smith (ersmith@netcom.com)
    Frank Bartels (knarf@nasim.cube.net)
    Frank Baumgart (Frank_Baumgart@pb.maus.de)
    Frank Naumann (fnaumann@freemint.de)
    Frank Rossien (Frank_Rossien@s2.maus.de)
    Grant Sullivan (grant@osf.org)
    Guido Flohr (guido@freemint.de)
    Guy Harris (guy@auspex.com)
    Hildo Biersma (boender@dutiws.twi.tudelft.nl)
    Howard Chu (hyc@hanauma.Jpl.Nasa.Gov)
    Jan-Hinrich "Oskar" Fessel (Jan-Hinrich_Fessel@un.maus.de)
    J�rg Westheide (Joerg_Westheide@su.maus.de)
    J�rgen Lock (nox@jelal.nasim.cube.net)
    Jwahar Bammi (bammi@cadence.com)
    Kay Roemer (roemer@informatik.uni-frankfurt.de)
    Konrad "Draco" Koskoszkiewicz (draco@mi.com.pl)
    Leif (pvt1-117@nada.kth.se)
    Markus Kilbinger (Markus_Kilbinger@ac.maus.de)
    Martin Koehling (mk@anuurn.do.open.de)
    Michael Hohmuth (hohmuth@freia.inf.tu-dresden.de)
    Michal Jaegermann (NTOMCZAK@vm.ucs.UAlberta.CA)
    Nick Castellano (entropy@terminator.rs.itd.umich.edu)
    Ole Arndt (Ole_Arndt@f.maus.de)
    Paul Eggert (eggert@twinsun.com)
    Robert Wilhelm (robert@gaston.nasim.cube.net)
    Scott Bigham (dsb@cs.duke.edu)
    Simon Gornall (sjg@phlem.ph.kcl.ac.uk)
    Stefan Steyer (dc4i@br0.hrz.th-darmstadt.de)
    Stephen Henson (shenson@nyx.cs.du.edu)
    Timothy Gallivan (timg@lifshitz.ph.utexas.edu)
    Ulf ??? (ulf@wolfhh.hanse.de)
    Ulf Moeller (Ulf_Moeller@hh2.maus.de)
    Ulrich Drepper (drepper@cygnus.com)
    Ulrich Kuehn (kuehn@goedel.uni-muenster.de)
    Uwe Ohse (Uwe_Ohse@pb2.maus.de)
    Wolfgang Lux (LUX%DHDIBM1.BITNET@vm.gmd.de)

%description -l de
Dieses Paket erlaubt die Benutzung der MiNTLib zum Cross-Compilieren
f�r MiNT auf anderen Plattformen.  Voraussetzung daf�r ist nat�rlich
die Installation der entsprechenden anderen Cross-Werkzeuge, wie
Cross-Linker, Cross-Assembler und vor allem Cross-Compiler. Sowohl
die Binutils (Linker und Assembler) als auch der Cross-Compiler
(vorzugsweise gcc) lassen sich mit dem nativen Compiler auf der
Cross-Plattform f�r MiNT erzeugen.

Dieses Paket selbst enth�lt lediglich Dokumentation. Die Header-Dateien
sind im Paket mintlib-devel enthalten, die statischen Standard-Bibliotheken
gleichfalls. Sowohl die Bibliotheken als auch die Header m�ssen bereits
installiert sein, bevor ein Cross-Compiler gebaut wird (das gilt 
nat�rlich nur, wenn es den Cross-Compiler nicht als bin�re RPM-Datei
gibt).


Verantwortlicher/Fehlerberichte:
================================
    Guido Flohr <guido@freemint.de>

Autoren:
========
    Allison Warwick (warwick@cs.uq.oz.au)
    Andreas Schwab (schwab@suse.de)
    Arthur David Olson (arthur_david_olson@nih.gov)
    Bjarne Pohlers (bjarne@goedel.uni-muenster.de)
    Bradley White (bww@k.gp.cs.cmu.edu)
    Christian Felsch (Christian_Felsch@hh.maus.de)
    Cristof Stadler (Cristof_Stadler@s2.maus.de)
    Dirk Haun (Dirk_Haun@wi2.maus.de)
    Eric R. Smith (ersmith@netcom.com)
    Frank Bartels (knarf@nasim.cube.net)
    Frank Baumgart (Frank_Baumgart@pb.maus.de)
    Frank Naumann (fnaumann@freemint.de)
    Frank Rossien (Frank_Rossien@s2.maus.de)
    Grant Sullivan (grant@osf.org)
    Guido Flohr (guido@freemint.de)
    Guy Harris (guy@auspex.com)
    Hildo Biersma (boender@dutiws.twi.tudelft.nl)
    Howard Chu (hyc@hanauma.Jpl.Nasa.Gov)
    Jan-Hinrich "Oskar" Fessel (Jan-Hinrich_Fessel@un.maus.de)
    J�rg Westheide (Joerg_Westheide@su.maus.de)
    J�rgen Lock (nox@jelal.nasim.cube.net)
    Jwahar Bammi (bammi@cadence.com)
    Kay Roemer (roemer@informatik.uni-frankfurt.de)
    Konrad "Draco" Koskoszkiewicz (draco@mi.com.pl)
    Leif (pvt1-117@nada.kth.se)
    Markus Kilbinger (Markus_Kilbinger@ac.maus.de)
    Martin Koehling (mk@anuurn.do.open.de)
    Michael Hohmuth (hohmuth@freia.inf.tu-dresden.de)
    Michal Jaegermann (NTOMCZAK@vm.ucs.UAlberta.CA)
    Nick Castellano (entropy@terminator.rs.itd.umich.edu)
    Ole Arndt (Ole_Arndt@f.maus.de)
    Paul Eggert (eggert@twinsun.com)
    Robert Wilhelm (robert@gaston.nasim.cube.net)
    Scott Bigham (dsb@cs.duke.edu)
    Simon Gornall (sjg@phlem.ph.kcl.ac.uk)
    Stefan Steyer (dc4i@br0.hrz.th-darmstadt.de)
    Stephen Henson (shenson@nyx.cs.du.edu)
    Timothy Gallivan (timg@lifshitz.ph.utexas.edu)
    Ulf ??? (ulf@wolfhh.hanse.de)
    Ulf Moeller (Ulf_Moeller@hh2.maus.de)
    Ulrich Drepper (drepper@cygnus.com)
    Ulrich Kuehn (kuehn@goedel.uni-muenster.de)
    Uwe Ohse (Uwe_Ohse@pb2.maus.de)
    Wolfgang Lux (LUX%DHDIBM1.BITNET@vm.gmd.de)
%endif

%description devel
These are the header files and static libraries from the MiNTLib
distribution.  It provides the standard libc for MiNT.

If you want to develop software for MiNT you have to install this
package.

%description -l devel
Dies sind die Header-Dateien und statischen Bibliotheken der
MiNTLib-Distribution, also die Standard-Libc f�r MiNT.

Wer Software f�r MiNT entwickeln will, muss dieses Paket installieren.

%description debug
These are the MiNTLib libraries with debugging information compiled in
that allow debuggers to trace the execution of programs.

You only need this package if you want to debug the MiNTLib itself.  It
is not necessary for debugging other programs.

%description -l de debug
Dies sind die MiNTLib-Bibliotheken mit Debug-Informationen kompiliert,
die Debuggern erlauben, die Ausf�hrung von Programmen zu verfolgen.

Dieses Paket wird nur zum Debuggen der MiNTLib selber ben�tigt.  Es
ist nicht notwendig, um andere Programme zu debuggen.

%description profile
These are the MiNTLib libraries with profiling information compiled in
that allow the profiler to trace the execution of programs.

You only need this package if you want to profile the MiNTLib itself.  It
is not necessary for profiling other programs.

%description -l de profile
Dies sind die MiNTLib-Bibliotheken mit Profiling-Informationen kompiliert,
die dem Profiler erlauben, die Ausf�hrung von Programmen zu verfolgen.

Dieses Paket wird nur zum Profilen der MiNTLib selber ben�tigt.  Es
ist nicht notwendig, um andere Programme zu profilen.

%description mshort
These are the MiNTLib libraries compiled with the compiler flag -mshort
that makes the data type int only 16 bits wide.

WARNING: This package is considered obsolete and support for it will
cease soon.  Read README.mshort in the doc directory for details.

%description -l de mshort
Dies sind die MiNTLib-Bibliotheken mit der Compiler-Option -mshort kompiliert,
wodurch der Datentyp int nur noch 16 Bits weit ist.

WARNUNG: Dieses Paket ist obsolet, und wird bald aufgegeben.  Details
sind der Datei README.mshort im doc-Verzeichnis zu entnehmen.

%prep
%setup -q

%build
%ifarch m68kmint
make prefix=%{_prefix} KSH=/bin/ksh
%else
make prefix=%{_prefix}%{crossprefix} KSH=/bin/ksh CROSS=yes \
	toolprefix=m68k-atari-mint-
%endif

%install
rm -rf $RPM_BUILD_ROOT
%ifarch m68kmint
make install prefix=$RPM_BUILD_ROOT/%{_prefix}%{crossprefix} \
           HEADER_CLEANUP=no \
           TZTOPDIR=$RPM_BUILD_ROOT/usr%{crossprefix} \
           bootsbindir=$RPM_BUILD_ROOT%{crossprefix}/sbin
%else
make install prefix=$RPM_BUILD_ROOT/%{_prefix}%{crossprefix} \
           HEADER_CLEANUP=no \
           TZTOPDIR=$RPM_BUILD_ROOT/usr%{crossprefix} \
           bootsbindir=$RPM_BUILD_ROOT%{crossprefix}/sbin \
           REDO=none CROSS=yes
%endif

%ifarch m68kmint           
strip $RPM_BUILD_ROOT/usr%{crossprefix}/sbin/* \
  $RPM_BUILD_ROOT%{crossprefix}/sbin/* || :

gzip -9nf $RPM_BUILD_ROOT/%{_prefix}%{crossprefix}/man/*/*

# Remove localtime stuff, will be done in post-install section.
ln -sf /etc/localtime $RPM_BUILD_ROOT/usr/share/zoneinfo/localtime
ln -sf localtime $RPM_BUILD_ROOT/usr/share/zoneinfo/posixrules
ln -sf localtime $RPM_BUILD_ROOT/usr/share/zoneinfo/posixtime
%endif

%pre
mkdir -p %{_prefix}%{crossprefix}/include/arpa 2>/dev/null ||:
mkdir -p %{_prefix}%{crossprefix}/include/bits 2>/dev/null ||:
mkdir -p %{_prefix}%{crossprefix}/include/mint 2>/dev/null ||:
mkdir -p %{_prefix}%{crossprefix}/include/net 2>/dev/null ||:
mkdir -p %{_prefix}%{crossprefix}/include/netinet 2>/dev/null ||:
mkdir -p %{_prefix}%{crossprefix}/include/protocols 2>/dev/null ||:
mkdir -p %{_prefix}%{crossprefix}/include/sys 2>/dev/null ||:
mkdir -p %{_prefix}%{crossprefix}/lib/m68020-60/mshort 2>/dev/null ||:
mkdir -p %{_prefix}%{crossprefix}/lib/mshort 2>/dev/null ||:

%ifarch m68kmint
%post
unset TIMEZONE
test -d /etc/sparemint || mkdir -p /etc/sparemint
test -f /etc/sparemint/timezone || touch /etc/sparemint/timezone
. /etc/sparemint/timezone 2>/dev/null || :
if test "x$TIMEZONE" = "x" -o "x$TIMEZONE" = "xFactory"; then
  # Write a default /etc/sparemint/timezone.  It is intentionally not
  # listed in %files so that it survives updates unchanged.
  mkdir -p /etc/sparemint
  cat > /etc/sparemint/timezone <<EOF
#! /bin/sh
# This is /etc/sparemint/timezone.
#
# This file is a shell script fragment that is read by installation
# routines to select your preferred timezone.  To get a list of
# possible timezones run the script "tzselect" (usually installed
# as /usr/sbin/tzselect) to guess a timezone interactively.  If
# this doesn't work you can also have a look at the timezone database,
# usually installed in /usr/share/zoneinfo.  Choose any one of the
# files found there, such as "Europe/Paris" or "America/New_York"
# as your timezone.
#
# Please note that there must not be any whitespace around the
# equality sign following.
TIMEZONE=Factory

# If TIMEZONE above was set to "Factory" you have not yet installed
# your timezone correctly (changing this here file only helps you
# now you re-install the MiNTLib).  You should now run the program
# "zic" to permanently set your timezone.  Do it as
#
#       zic -l Europe/Paris -p Europe/Paris
#
# or
#
#       zic -l America/New_York -p America/New_York
#
# depending on what timezone you chose.  See the manual page zic(8)
# for details.
EOF

  # Now issue a warning:
  cat <<EOF
WARNING: Your local timezone has been set to "Factory" which is
definitely not what you want.  Please edit the file

	/etc/sparemint/timezone

to set the timezone defaults for your system.  After you have edited
it, don't forget to run the program "zic" with the correct arguments
(see /etc/sparemint/timezone for defaults).
EOF
    TIMEZONE=Factory
fi

# Don't let the installation fail because of a bogus TIMEZONE value 
# in /etc/sparemint/timezone
test -f /usr/share/zoneinfo/$TIMEZONE || TIMEZONE=Factory
ln -sf /usr/share/zoneinfo/$TIMEZONE /etc/localtime
%endif  # not cross-lib rpm

%clean
rm -rf $RPM_BUILD_ROOT

%ifarch m68kmint
%files
%defattr(-,root,root)
%doc AUTHORS BUGS COPYING COPYING.LIB COPYMINT ChangeLog* FAQ
%doc HACKING HELP LICENSES NEWS NOTES README* TODO
%doc tz/Arts.htm tz/README tz/README.1st tz/Theory tz/WWW.htm
%{_prefix}%{crossprefix}/share/man/*/*
/usr/share/zoneinfo
/usr/sbin/*
/sbin/tzinit
%else # Cross-lib
%files
%defattr(-,root,root)
%doc AUTHORS BUGS COPYING COPYING.LIB COPYMINT ChangeLog* FAQ
%doc HACKING HELP LICENSES NEWS NOTES README* TODO
%doc tz/Arts.htm tz/README tz/README.1st tz/Theory tz/WWW.htm
%endif

%files devel
%defattr(-,root,root)
%{_prefix}%{crossprefix}/lib/*.o
%{_prefix}%{crossprefix}/lib/libc.a
%{_prefix}%{crossprefix}/lib/libiio.a
%{_prefix}%{crossprefix}/lib/libsocket.a
%{_prefix}%{crossprefix}/lib/m68020-60/libc.a
%{_prefix}%{crossprefix}/lib/m68020-60/libc020.a
%{_prefix}%{crossprefix}/lib/m68020-60/libiio.a
%{_prefix}%{crossprefix}/lib/m68020-60/libiio020.a
%{_prefix}%{crossprefix}/lib/m68020-60/libsocket.a
%{_prefix}%{crossprefix}/lib/m68020-60/libsocket020.a
%{_prefix}%{crossprefix}/include/COPYMINT
%{_prefix}%{crossprefix}/include/COPYING.LIB
%{_prefix}%{crossprefix}/include/*.h
%{_prefix}%{crossprefix}/include/stab.def
%{_prefix}%{crossprefix}/include/arpa/*.h
%{_prefix}%{crossprefix}/include/bits/*.h
%{_prefix}%{crossprefix}/include/mint/*.h
%{_prefix}%{crossprefix}/include/net/*.h
%{_prefix}%{crossprefix}/include/netinet/*.h
%{_prefix}%{crossprefix}/include/protocols/*.h
%{_prefix}%{crossprefix}/include/sys/*.h

%files debug
%defattr(-,root,root)
%{_prefix}%{crossprefix}/lib/libc_g.a
%{_prefix}%{crossprefix}/lib/libiio_g.a
%{_prefix}%{crossprefix}/lib/libsocket_g.a

%files profile
%defattr(-,root,root)
%{_prefix}%{crossprefix}/lib/libc_p.a
%{_prefix}%{crossprefix}/lib/libiio_p.a
%{_prefix}%{crossprefix}/lib/libsocket_p.a

%files mshort
%defattr(-,root,root)
%{_prefix}%{crossprefix}/lib/m68020-60/mshort/libc.a
%{_prefix}%{crossprefix}/lib/m68020-60/mshort/libc16020.a
%{_prefix}%{crossprefix}/lib/m68020-60/mshort/libiio.a
%{_prefix}%{crossprefix}/lib/m68020-60/mshort/libiio16020.a
%{_prefix}%{crossprefix}/lib/m68020-60/mshort/libsocket.a
%{_prefix}%{crossprefix}/lib/m68020-60/mshort/libsocket16020.a
%{_prefix}%{crossprefix}/lib/mshort/libc.a
%{_prefix}%{crossprefix}/lib/mshort/libc16.a
%{_prefix}%{crossprefix}/lib/mshort/libiio.a
%{_prefix}%{crossprefix}/lib/mshort/libiio16.a
%{_prefix}%{crossprefix}/lib/mshort/libsocket.a
%{_prefix}%{crossprefix}/lib/mshort/libsocket16.a

%changelog
* Sat May 7 2000 Guido Flohr <guido@freemint.de>
- Fixed for cross-rpm (thanks to Frank Naumann <fnaumann@freemint.de>).

* Sat Apr 8 2000 Guido Flohr <guido@freemint.de>
- Removed stab.h and stab.def from include directory (already in mintbin).
- Added names of authors/maintainers.

* Sat Apr 1 2000 Guido Flohr <guido@freemint.de>
- Modified for 0.55
- Moved mshort libs into separate package to simplify removal.
- Crude support for a cross-lib rpm, try out if it works.
- removed mbaserel libs which are not supported any longer.
