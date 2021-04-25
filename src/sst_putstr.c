/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

void sst_putstr(char const *s) {
    while (s && *s)
        sst_putchar (*s++);   
}
