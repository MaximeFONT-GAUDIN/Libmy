##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC_TEST	=	my_putchar_test.c				\
				my_putstr_test.c				\
				my_put_nbr_test.c				\
				my_getnbr_test.c				\
				my_alphaisalpha_test.c			\
				my_alphaislower_test.c			\
				my_alphaisnum_test.c			\
				my_alphaisprint_test.c			\
				my_alphaisupper_test.c			\
				my_alphatolower_test.c			\
				my_alphatoupper_test.c			\
				my_compute_power_rec_test.c		\
				my_compute_square_root_test.c	\
				my_test.c						\
				my_isneg_test.c					\
				my_revstr_test.c				\
				my_strlen_test.c				\
				my_find_prime_sup_test.c		\
				my_is_prime_test.c				\
				my_str_isalpha_test.c			\
				my_str_islower_test.c			\
				my_str_isnum_test.c				\
				my_str_isprintable_test.c		\
				my_str_isupper_test.c			\
				my_strlowcase_test.c			\
				my_strupcase_test.c				\
				my_strcapitalize_test.c			\
				my_swap_test.c					\
				my_strcat_test.c				\
				my_strcmp_test.c				\
				my_strchr_test.c				\
				my_strcpy_test.c				\
				my_put_nbr_base_test.c			\
				my_showstr_test.c				\
				my_strrchr_test.c				\
				my_strncpy_test.c				\
				# my_strndup_test.c				\
				# my_strdup_test.c				\
# 				my_strncmp_test.c				\
# 				my_strstr_test.c				\
# 				my_showmem_test.c				\
# 				my_strncat_test.c				\
# 				my_strsep_test.c				\
# 				my_strtowordarray_test.c		\
# 				my_sort_int_array_test.c		\

SRC	=	../lib/my/my_putchar.c					\
		../lib/my/my_putstr.c					\
		../lib/my/my_put_nbr.c					\
		../lib/my/my_getnbr.c					\
		../lib/my/my_alphaisalpha.c				\
		../lib/my/my_alphaislower.c				\
		../lib/my/my_alphaisnum.c				\
		../lib/my/my_alphaisprint.c				\
		../lib/my/my_alphaisupper.c				\
		../lib/my/my_alphatolower.c				\
		../lib/my/my_alphatoupper.c				\
		../lib/my/my_compute_power_rec.c		\
		../lib/my/my_compute_square_root.c		\
		../lib/my/my_isneg.c					\
		../lib/my/my_revstr.c					\
		../lib/my/my_strlen.c					\
		../lib/my/my_find_prime_sup.c			\
		../lib/my/my_is_prime.c					\
		../lib/my/my_str_isalpha.c				\
		../lib/my/my_str_islower.c				\
		../lib/my/my_str_isnum.c				\
		../lib/my/my_str_isprintable.c			\
		../lib/my/my_str_isupper.c				\
		../lib/my/my_strlowcase.c				\
		../lib/my/my_strupcase.c				\
		../lib/my/my_strcapitalize.c			\
		../lib/my/my_swap.c						\
		../lib/my/my_strcat.c					\
		../lib/my/my_strcmp.c					\
		../lib/my/my_strchr.c					\
		../lib/my/my_strcpy.c					\
		../lib/my/my_put_nbr_base.c				\
		../lib/my/my_showstr.c					\
		../lib/my/my_strrchr.c					\
		../lib/my/my_strncpy.c					\
		# ../lib/my/my_strdup.c					\
# 		../lib/my/my_strndup.c					\
# 		../lib/my/my_strstr.c					\
# 		../lib/my/my_showmem.c					\
# 		../lib/my/my_strncat.c					\
# 		../lib/my/my_strncmp.c					\
# 		../lib/my/my_strsep.c					\
# 		../lib/my/my_strtowordarray.c			\
# 		../lib/my/my_sort_int_array.c			\

OBJ			=	$(SRC:.c=.o)
OBJ_TEST	=	$(SRC_TEST:.c=.o)

CC			=	clang

COVERAGE	=  -fprofile-arcs -ftest-coverage -fsanitize=address
CFLAGS		=	-W -Wall -Wextra -Werror -fstack-protector -fstack-protector-all -fstack-protector-strong -Wstack-protector -Dmalloc=my_malloc $(COVERAGE)
LDFLAGS		= $(shell pkg-config --libs --cflags criterion) $(COVERAGE)

all:	$(OBJ) $(OBJ_TEST)
		$(CC) $^ -o tests $(LDFLAGS)
		./tests

clean:
		rm -rf $(OBJ)
		rm -rf *.gcda *.gcno *.gcov *.info *.o

fclean:	clean
		rm -rf tests

re:	fclean all