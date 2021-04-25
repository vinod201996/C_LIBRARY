/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"
#include <unistd.h>

void sst_putendl_fd(char const *s, int fd)
{
	sst_putstr_fd(s, fd);
	sst_putchar_fd('\n', fd);
}