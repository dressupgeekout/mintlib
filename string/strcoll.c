/* dummy implementations for strcoll and strxfrm, that doesn't know about
   locales */

#include <string.h>

int
strcoll (const char *scan1, const char *scan2)
{
  return strcmp (scan1, scan2);
}
