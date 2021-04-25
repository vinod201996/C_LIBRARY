/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

char *sst_strstr(const char *s1, const char *s2)
{
    size_t n;
    n = sst_strlen(s2);
    while(*s1)
        if(!sst_memcmp(s1++,s2,n)) {
            return (char *)(s1-1);
	}
    return 0;
}
