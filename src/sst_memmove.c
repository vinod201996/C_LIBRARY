/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"
#include <stdlib.h>

void *sst_memmove(void *dest, const void *src, size_t n)
{
	unsigned char tmp[n];
    sst_memcpy(tmp,src,n);
    sst_memcpy(dest,tmp,n);
    return dest;
}
