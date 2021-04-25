/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include <stdlib.h>
#include "libsst.h"

int is_white_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}
/*
** Iterate through the white spaces at the beginning of the string
*/
int get_first_position(char const *str) {
    int i = 0;
    while (is_white_space(str[i])) {
        i += 1;
    }
    return (i);
}
/*
** Get the length of a string
*/
int get_str_len(char const *str) {
    int len = 0;
    while (str[len] != '\0') {
        len += 1;
    }
    return (len);
}
/*
** Find the last position in a string that is not a white space
*/
int get_last_position(char const *str) {
    int i = get_str_len(str) - 1;
    while (is_white_space(str[i])) {
        i -= 1;
    }
    return (i);
}
/*
** Returns the correct length of a trimmed string
*/
int get_trim_len(char const *str) {
    return (get_last_position(str) - get_first_position(str));
}
/*
** Allocates a new string with removed whitespace characters from the beginning of the source string `str`
*/
char *sst_strtrim(char const *str) {
    char *trim;
    int i, len, start;

    trim = NULL;
    if (str != NULL) {
        i = 0;
        len = get_trim_len(str) + 1;
        if(!(trim = (char *)malloc(len))){
		return (NULL);
	}
        start = get_first_position(str);
        while (i < len) {
            trim[i] = str[start];
            i += 1;
            start += 1;
        }
        trim[i] = '\0';
    }
    return (trim);
}
