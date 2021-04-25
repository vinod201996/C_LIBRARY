/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include <unistd.h>
#include "libsst.h"

void sst_putchar_fd(char c, int fd){
	write(fd, &c, 1);
}