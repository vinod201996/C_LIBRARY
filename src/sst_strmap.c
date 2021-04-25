/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

char *sst_strmap(char const *str, char (*f)(char))
{
	int i;
	char *result;

	i = 0;
	if (str == NULL || f == NULL) {
		return (NULL);
	}
	if(!(result = sst_memalloc(sst_strlen((char*)str)))){
		return (NULL);
	}
	sst_strcpy(result, str);
	while (result[i])
	{
		result[i] = (*f)(result[i]);
		i++;
	}
	return (result);
}
