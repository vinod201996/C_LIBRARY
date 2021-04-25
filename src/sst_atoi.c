/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

int sst_atoi(const char* S)
{
	long num = 0;
	int i = 0, sign = 1;

	// skip white space characters
	while (S[i] == ' ' || S[i] == '\n' || S[i] == '\t')
		i++;
	
	// note sign of the number
	if (S[i] == '+' || S[i] == '-')
	{
		if (S[i] == '-')
			sign = -1;
		i++;
	}

	// run till we have reached end of the string or
	// current character is non-numeric
	while (S[i] && (S[i] >= '0' && S[i] <= '9'))
	{
		num = num * 10 + (S[i] - '0');
		i++;
	}

	return sign * num;
}
