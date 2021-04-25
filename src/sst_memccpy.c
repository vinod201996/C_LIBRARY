/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

void *sst_memccpy(void *dst, const void *src, int c, size_t n)
{
    char *d;
    char *s; 

   d = dst;
   s = (char *)src;
	
  /*
   * copy from lower addresses to higher addresses
   */
  while (n--)
    {
      if (*s == c)
        return ++s;

      *d++ = *s++;
    }

  return NULL;
}
