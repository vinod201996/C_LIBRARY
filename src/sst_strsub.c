/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"
#include <stdlib.h>

char *sst_strsub(const char *src, int m, int n)
{
	char *dest;
	int len;
	
	// get length of the destination string
	len = n - m;

	// allocate (len + 1) chars for destination (+1 for extra null character)
	dest = (char*)malloc(sizeof(char) * (len + 1));

	// start with m'th char and copy 'len' chars into destination
	sst_strncpy(dest, (src + m), len);

	// return the destination string
	return dest;
}
