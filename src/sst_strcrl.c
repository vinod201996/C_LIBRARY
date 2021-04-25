/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

void sst_strclr(char *s)
{
	int	count;

	count = 0;
	if (s != NULL)
	{
    	while (s[count])
		{
			s[count] = '\0';
			count++;
		}
	}
}
