/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

int	sst_isalnum(int i)
{
	if (sst_isdigit(i) || sst_isalpha(i))
		return (1);
	return (0);
}
