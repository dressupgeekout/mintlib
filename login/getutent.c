/* Copyright (C) 1996, 1997 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Ulrich Drepper <drepper@cygnus.com>, 1996.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* Adapted to MiNTLib by Guido Flohr <guido@freemint.de>,
   14 Sep 1999.  */
   
#include <utmp.h>
#include <stdlib.h>

__typeof__(getutent) __getutent;

/* Local buffer to store the result.  */
static struct utmp buffer;

struct utmp *
__getutent (void)
{
  struct utmp *result;

  if (getutent_r (&buffer, &result) < 0)
    return NULL;

  return result;
}
weak_alias (__getutent, getutent)
