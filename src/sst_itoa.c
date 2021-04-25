/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

char *sst_itoa(int n)
{
	char *number;
	char *tmp;
	
	number = (char *)sst_memalloc(10);
	if (n >= 0 && number)
	{
		*--number = '0' + (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--number = '0' + (n % 10);
			n /= 10;
		}
	}
	else if (number)
	{
		*--number = '0' - (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--number = '0' - (n % 10);
			n /= 10;
		}
		*--number = '-';
	}
	tmp = sst_strdup(number);

	return (tmp);
}
