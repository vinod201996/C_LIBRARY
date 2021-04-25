/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"
#include <stdlib.h>

char *sst_strdup(const char *s1)
{
    char	*str;
	int		i;

	i = 0;
	if ((str = (char *)malloc(sizeof(const char) * sst_strlen(s1) + 1))){
		str[sst_strlen(s1)] = '\0';
	}else{
		return (NULL);
	}
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
