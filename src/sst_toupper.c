/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

int	sst_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}