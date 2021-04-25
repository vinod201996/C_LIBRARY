/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"
#include <stdlib.h>


char *sst_strpbrk(const char *s1, const char *s2)
{
    while(*s1)
        if(sst_strchr(s2, *s1++))
            return ((char*)--s1);
    return (0);
}
char** sst_strsplit(char *inp,  char delim) {
    char **arr;
    char *src;
    char *src_org;
    char *c;
    int n;
    char *sep = &delim;
    char defsep[]=" \t\n\r\f";

    if(!sep)
        sep=defsep;

    src=malloc((sst_strlen(inp) + 1));
    sst_strcpy(src, inp);
    src_org = src;
    n = 0;

    while ((c = sst_strpbrk(src, sep))) {
        while (c == src) {
            src++;
            c = sst_strpbrk(src, sep);
        }

        if (c == NULL) 
            break;

        src = c + 1;
        n++;
    }

    int nelem = n + 1;
    arr = (char **)malloc(sizeof(char *) * nelem);
    sst_memset(arr, 0, sizeof(char *) * nelem);

    src = src_org;
    n = 0;

    while ((c = sst_strpbrk(src, sep))) {
        while (c == src) {
            src++;
            c = sst_strpbrk(src, sep);
        }
        
        if (c == NULL) 
            break;

        *c = 0;
        arr[n] = src;

        src = c + 1;
        n++;
    }

    arr[n] = src;

    return arr;
}
