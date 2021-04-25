/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

void sst_striteri(char *s, void (*f)(unsigned int, char *))
{
	int 	i;
	int 	i2;

	i = 0;
	i2 = 0;
	if (s != NULL && f != NULL)
	{
		i = sst_strlen(s);
		while (i2 < i)
		{
			(*f)(i2, s);
			s++;
			i2++;
		}
	}	
}
