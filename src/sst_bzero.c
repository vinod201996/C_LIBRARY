/******************************************************************************

Author: Vinod Ghadge
Email: vinod.ghadge102@gmail.com

*******************************************************************************/


#include "libsst.h"

void sst_bzero(void *s, size_t n)
{
	char *c;

	c = s;
	while (n)
	{
		*c = 0;
		c++;
		n--;
	}
}
