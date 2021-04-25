/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

char * sst_strchr( const char *str, char ch ) 
{
    while ( *str && *str != ch ) ++str;

    return ( char * )( ch == *str ? str : NULL );  
}
