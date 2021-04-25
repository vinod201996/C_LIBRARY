/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

char* sst_strcpy(char* destination, const char* source)
{
	if (destination == NULL)
		return (NULL);

	char *ptr;
	ptr = destination;

	while (*source != '\0')
	{
		*destination = *source;
		destination++;
		source++;
	}

	*destination = '\0';

	return (ptr);
}
