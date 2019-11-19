/*
** EPITECH PROJECT, 2019
** my_showmem_test.c
** File description:
** my_showmem_test.c
*/

#include "my_test.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_showmem, for_16_bits)
{
    cr_redirect_stdout();
    my_showmem("une chaine de caractere de 16 bits", 16);
    cr_assert_stdout_eq_str("00000000: 756e 6520 6368 6169 6e65 2064 6520 6361 une chaine de ca\n");
}