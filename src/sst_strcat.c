/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

char* sst_strcat(char* destination, const char* source)
{
	char* ptr;
	
	ptr = destination + sst_strlen(destination);

	while (*source != '\0')
		*ptr++ = *source++;

	*ptr = '\0';

	return (destination);
}

