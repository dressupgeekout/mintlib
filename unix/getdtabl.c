
#include <stdio.h>
#include <mintbind.h>
#include <support.h>
#include <unistd.h>
#include <errno.h>

int
__getdtablesize (void)
{
	int r;

	r = (int) Sysconf(_SC_OPEN_MAX);

	if (r == -ENOSYS)
		return FOPEN_MAX;

	return r;	
}
weak_alias (__getdtablesize, getdtablesize)
