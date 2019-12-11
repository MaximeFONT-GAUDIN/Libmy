##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	my_putchar.c				\
		my_strndup.c				\
		my_putstr.c					\
		my_put_nbr.c				\
		my_getnbr.c					\
		my_alphaisalpha.c			\
		my_alphaislower.c			\
		my_alphaisnum.c				\
		my_alphaisprint.c			\
		my_alphaisupper.c			\
		my_alphatolower.c			\
		my_alphatoupper.c			\
		my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_isneg.c					\
		my_revstr.c					\
		my_strlen.c					\
		my_find_prime_sup.c			\
		my_is_prime.c				\
		my_str_isalpha.c			\
		my_str_islower.c			\
		my_str_isnum.c				\
		my_str_isprintable.c		\
		my_str_isupper.c			\
		my_strlowcase.c				\
		my_strupcase.c				\
		my_strcapitalize.c			\
		my_swap.c					\
		my_strcat.c					\
		my_strcmp.c					\
		my_strchr.c					\
		my_strcpy.c					\
		my_put_nbr_base.c			\
		my_showstr.c				\
		my_strrchr.c				\
		my_strdup.c					\
		my_strncpy.c				\
		my_strncat.c				\
		my_strncmp.c				\
		my_strstr.c					\
		my_sort_int_array.c			\
		my_add_str_to_array.c		\
		my_strsep.c					\
		my_strtowordarray.c			\
# 		my_showmem.c				\

LDFLAGS	=	-L./lib/my -lmy

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
		ar rc	$@ $^

clean:
		rm -rf *.gcda *.gcno *.info $(OBJ) *.o

fclean:	clean
		rm -f $(NAME)

re: fclean all