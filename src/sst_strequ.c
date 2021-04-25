/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

int	sst_strequ(char const *str1, char const *str2)
{
	int	i;

	if (str1 == NULL || str2 == NULL) {
		return (0);
	}
	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i]) {
			return (0);
		}
		i++;
	}
	if (str1[i] != str2[i]){
		return (0);
	}
	return (1);
}

