/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

void striter(char *s, void (*f)(char *)) 
{
	int	i;
	int 	i2;

	i = 0;
	i2 = 0;
	if (s != NULL && f != NULL)
	{
		i = sst_strlen(s);
		while (i2 < i)
		{
			(*f)(s);
			s++;
			i2++;
		}
	}
}
