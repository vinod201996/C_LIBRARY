/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

size_t sst_strlcat(char *dst, const char *src, size_t siz)
{
	char *d;
	const char *s;
	size_t n;
	size_t dlen;
	
	n = siz;
	s = src;
	d = dst;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;
	if (n == 0) {
		return(dlen + sst_strlen(s));
	}	
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return(dlen + (s - src));	/* count does not include NULL */
}
