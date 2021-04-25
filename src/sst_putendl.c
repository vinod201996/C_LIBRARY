/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"


void sst_putendl(char const *s)
{
	sst_putstr(s);
	sst_putchar('\n');
}
