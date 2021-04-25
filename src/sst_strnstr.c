/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

char *sst_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s2 == NULL || sst_strlen(s2) == 0) {
		return ((char *)s1);
	}	
	if ((size_t)sst_strlen(s2) > n) {
		return (NULL);
	}
	while (i < n)
	{
		if (sst_strncmp((char *)&s1[i], s2, sst_strlen(s2)) == 0)
		{
			if (i + sst_strlen(s2) > n) {
				return (NULL);
			}
			return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
