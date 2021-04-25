/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

int	sst_isprint(int i)
{
	if (i > 31 && i < 127)
		return (1);
	return (0);
}
