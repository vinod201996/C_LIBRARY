/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"
#include <stdlib.h>

char *sst_strnew(size_t size)
{
	char *str;

	if(!(str = sst_memalloc(size+1))) {
		return (NULL);
	}
	return (str);
}
