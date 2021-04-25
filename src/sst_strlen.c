/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

int sst_strlen(const char *p)
{
    unsigned int count;
    count = 0;
    while(*p!='\0')
    {
        count++;
        p++;
    }
    return (count);
}
