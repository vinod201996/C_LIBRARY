/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

int	sst_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
