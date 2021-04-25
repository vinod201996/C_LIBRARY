/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

int	sst_isdigit(int i)
{
	if (i >= 48 && i <= 57)
		return (1);
	return (0);
}