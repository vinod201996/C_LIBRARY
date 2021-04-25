/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

void* sst_memset(void *b, int c, int len) {

  	unsigned char *p;

	p = b;

  	while(len > 0)
    	{
      		*p = c;
      		p++;
      		len--;
    	}
  return(b);
}
