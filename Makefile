

NAME = libsst.a

SRC =	src/sst_atoi.c		\
		src/sst_bzero.c	\
		src/sst_isalnum.c	\
		src/sst_isalpha.c	\
		src/sst_isascii.c	\
		src/sst_isdigit.c	\
		src/sst_isprint.c	\
		src/sst_itoa.c	\
		src/sst_lstadd.c	\
		src/sst_lstdel.c	\
		src/sst_lstdelone.c	\
		src/sst_lstiter.c	\
		src/sst_lstmap.c	\
		src/sst_lstnew.c	\
		src/sst_memalloc.c	\
		src/sst_memccpy.c	\
		src/sst_memchr.c	\
		src/sst_memcmp.c	\
		src/sst_memcpy.c	\
		src/sst_memdel.c	\
		src/sst_memmove.c	\
		src/sst_memset.c	\
		src/sst_putchar.c	\
		src/sst_putchar_fd.c\
		src/sst_putendl.c	\
		src/sst_putendl_fd.c\
		src/sst_putnbr.c	\
		src/sst_putnbr_fd.c	\
		src/sst_putstr.c	\
		src/sst_putstr_fd.c	\
		src/sst_strcat.c	\
		src/sst_strchr.c	\
		src/sst_strcmp.c	\
		src/sst_strcpy.c	\
		src/sst_strcrl.c	\
		src/sst_strdel.c	\
		src/sst_strdup.c	\
		src/sst_strequ.c	\
		src/sst_striter.c	\
		src/sst_striteri.c	\
		src/sst_strjoin.c	\
		src/sst_strlcat.c	\
		src/sst_strlen.c	\
		src/sst_strmap.c	\
		src/sst_strmapi.c	\
		src/sst_strncat.c	\
		src/sst_strncmp.c	\
		src/sst_strncpy.c	\
		src/sst_strnequ.c	\
		src/sst_strnew.c	\
		src/sst_strnstr.c	\
		src/sst_strrchr.c	\
		src/sst_strsplit.c	\
		src/sst_strstr.c	\
		src/sst_strsub.c	\
		src/sst_strtrim.c	\
		src/sst_tolower.c	\
		src/sst_toupper.c	

HEAD = ./includes

OBJ = 	sst_atoi.o      \
        sst_bzero.o     \
        sst_isalnum.o   \
        sst_isalpha.o   \
        sst_isascii.o   \
        sst_isdigit.o   \
        sst_isprint.o   \
        sst_itoa.o      \
        sst_lstadd.o    \
        sst_lstdel.o    \
        sst_lstdelone.o \
        sst_lstiter.o   \
        sst_lstmap.o    \
        sst_lstnew.o    \
        sst_memalloc.o  \
        sst_memccpy.o   \
        sst_memchr.o    \
        sst_memcmp.o    \
        sst_memcpy.o    \
        sst_memdel.o    \
        sst_memmove.o   \
        sst_memset.o    \
        sst_putchar.o   \
        sst_putchar_fd.o\
        sst_putendl.o   \
        sst_putendl_fd.o\
        sst_putnbr.o    \
        sst_putnbr_fd.o \
        sst_putstr.o    \
        sst_putstr_fd.o \
        sst_strcat.o    \
        sst_strchr.o    \
        sst_strcmp.o    \
        sst_strcpy.o    \
        sst_strcrl.o    \
        sst_strdel.o    \
        sst_strdup.o    \
	sst_strequ.o    \
        sst_striter.o   \
        sst_striteri.o  \
        sst_strjoin.o   \
        sst_strlcat.o   \
        sst_strlen.o    \
        sst_strmap.o    \
        sst_strmapi.o   \
        sst_strncat.o   \
        sst_strncmp.o   \
        sst_strncpy.o   \
        sst_strnequ.o   \
        sst_strnew.o    \
        sst_strnstr.o   \
        sst_strrchr.o   \
        sst_strsplit.o  \
        sst_strstr.o    \
        sst_strsub.o    \
        sst_strtrim.o   \
        sst_tolower.o   \
        sst_toupper.o

all : $(NAME)

$(NAME): 
	@echo "Compiling .."
	@gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEAD) && ar rc $(NAME) $(OBJ)
	@echo "Done !"

clean:
	@echo "Remove .o  ..."
	@/bin/rm -f $(OBJ)
	@echo "Done !"

fclean: clean
	@echo "Remove lib ..."
	@/bin/rm -f $(NAME)
	@echo "Done !" 

re: fclean all
