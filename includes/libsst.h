/******************************************************************************

Author: Vinod Ghadge
Email: vinod.ghadge102@gmail.com

*******************************************************************************/


#ifndef LIBSST_H
#define LIBSST_H
#include <string.h>
#include <stdlib.h>

int sst_atoi(const char* S);
void sst_bzero(void *s, size_t n);
int	sst_isalnum(int i);
int sst_isalpha(int i);
int	sst_isascii(int c);
int	sst_isdigit(int i);
int	sst_isprint(int i);
char *sst_itoa(int n);
void *sst_memalloc(size_t size);
void *sst_memccpy(void *dst, const void *src, int c, size_t n);
void *sst_memchr(const void *s, int c, size_t n);
int	 sst_memcmp(const void *s1, const void *s2, size_t n);
void *sst_memcpy(void * dest, const void *src, size_t size);
void sst_memdel(void **ap);
void *sst_memmove(void *dest, const void *src, size_t n);
void* sst_memset(void *b, int c, int len);
void sst_putchar(char c);
void sst_putchar_fd(char c, int fd);
void sst_putendl(char const *s);void sst_putendl_fd(char const *s, int fd);
void sst_putnbr(int nb);
void sst_putnbr_fd(int nb, int fd);
void sst_putstr(char const *s);
void sst_putstr_fd(char const *s, int fd);
char* sst_strcat(char* destination, const char* source);
char * sst_strchr( const char *str, char ch );
int sst_strcmp(const char *X, const char *Y);
char* sst_strcpy(char* destination, const char* source);
void sst_strclr(char *s);
void sst_strdel(char **as);
char *sst_strdup(const char *s1);
int	sst_strequ(char const *str1, char const *str2);
void striter(char *s, void (*f)(char *));
void sst_striteri(char *s, void (*f)(unsigned int, char *));
char *sst_strjoin(char const *s1, char const *s2);
size_t sst_strlcat(char *dst, const char *src, size_t siz);
int sst_strlen(const char *p);
char *sst_strmap(char const *str, char (*f)(char));
char *sst_strmapi(char const *str, char (*f)(unsigned int, char));
char *sst_strncat(char* destination, const char* source, size_t num);
int sst_strncmp( const char * s1, const char * s2, size_t n );
char* sst_strncpy(char* destination, const char* source, size_t num);
int	sst_strnequ(char const *s1, char const *s2, size_t n);
char *sst_strnew(size_t size);
char *sst_strnstr(const char *s1, const char *s2, size_t n);
char *sst_strrchr(const char *s, int c);
char** sst_strsplit(char *inp,  char delim);
char *sst_strstr(const char *s1, const char *s2);
char *sst_strsub(const char *src, int m, int n);
char *sst_strtrim(char const *str);
int	sst_tolower(int i);
int	sst_toupper(int c);


typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;


t_list	*sst_lstnew(void const *content, size_t content_size);
void	sst_lstdelone(t_list **alst, void (*del)(void*, size_t));
void	sst_lstdel(t_list **alst, void (*del)(void *, size_t));
void	sst_lstadd(t_list **alst, t_list *new);
void	sst_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*sst_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
char	*sst_strappend(char *s1, char *s2);
#endif
