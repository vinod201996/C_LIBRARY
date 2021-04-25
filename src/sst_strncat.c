/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

char *sst_strncat(char* destination, const char* source, size_t num)
{
	char* ptr;
	
	ptr = destination + sst_strlen(destination);
	while (*source != '\0' && num--)
		*ptr++ = *source++;

	*ptr = '\0';

	return (destination);
}
