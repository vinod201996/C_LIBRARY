/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"
#include <stdlib.h>

char *sst_strjoin(char const *s1, char const *s2)
{
	char *s3;

	if (!s1 && !s2) {
		return (NULL);
	}	
	if (!s1){
		return (sst_strdup(s2));
	}	
	if (!s2) {
		return (sst_strdup(s1));
	}
    if(!(s3 = malloc(sst_strlen(s1) + sst_strlen(s2)))) {
		return (NULL);
	}
	sst_strcpy(s3, s1);
	sst_strcat(s3, s2);
	return (s3);
}
