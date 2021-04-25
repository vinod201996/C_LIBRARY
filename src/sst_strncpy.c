/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

char* sst_strncpy(char* destination, const char* source, size_t num)
{
	char* ptr;
	if (destination == NULL){
		return (NULL);
	}
	ptr = destination;

	while (*source && num--)
	{
		*destination = *source;
		destination++;
		source++;
	}

	*destination = '\0';

	return (ptr);
}
