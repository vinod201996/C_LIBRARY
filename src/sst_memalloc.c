/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"
#include <stdlib.h>

void *sst_memalloc(size_t size) {

	void *result;

	result = malloc(size);
	if (result != NULL)
	{
		sst_memset(result, '\0', size);
	}
	return (result);
}
