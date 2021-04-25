/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"
#include <stdio.h>

void *sst_memcpy(void *dest,const void *src, size_t size) 
{	
    char *dp;
    const char *sp;
    
    dp = dest;
    sp = src;
    while (size--)
        *dp++ = *sp++;
    return (dest);
}
