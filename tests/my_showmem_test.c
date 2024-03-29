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

Test(my_showmem, for_24_bits)
{
    cr_redirect_stdout();
    my_showmem("une tres grande chaine de caracteres qui depasse les 24 sinon ca marche pas", 24);
    cr_assert_stdout_eq_str("00000000: 756e 6520 7472 6573 2067 7261 6e64 6520 une tres grande \n00000010: 6368 6169 6e65 2064                     chaine d\n");
}

Test(my_showmem, for_16_bits_with_16_bit_sentense)
{
    char str[] = /*"\xff"*/ {112, 101, 116, 105, 116, 101, 32, 112, 104, 114, 97, 115, 101, 0, 4, 1, 1, 4, 2, 3};

    cr_redirect_stdout();
    my_showmem(str, 16);
    cr_assert_stdout_eq_str("00000000: 7065 7469 7465 2070 6872 6173 6500 0401 petite phrase...\n");
}