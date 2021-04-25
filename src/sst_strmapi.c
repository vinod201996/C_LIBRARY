/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

char *sst_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *result;

	i = 0;
	if (str == NULL || f == NULL) {
		return (NULL);
	}
	result = sst_memalloc(sst_strlen((char*)str));
	if(result != NULL){
	sst_strcpy(result, str);
		while (result[i])
		{
			result[i] = (*f)(i, result[i]);
			i++;
		}
	}
	return (result);
}
