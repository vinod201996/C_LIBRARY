/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

char *sst_strrchr(const char *s, int c)
{
    char* ret=0;
    while(*s++) {
        if( *s == (char)c )
            ret=(char*)s;
    } 
    return ret;
}
