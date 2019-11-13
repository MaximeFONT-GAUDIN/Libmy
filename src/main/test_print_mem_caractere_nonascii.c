// #include <unistd.h>
// #include <stdlib.h>
// #include <stdio.h>


// int my_strlen(char *str)
// {
//     int i = 0;

//     for (; str[i] != 0; i++);
//     return (i);
// }

// void my_putchar(char c)
// {
//     write(1, &c, 1);
// }

// void my_putstr(char *str)
// {
//     if (str[0] == 0) {
//         my_putchar(0);
//         return;
//     }
//     for (int i = 0; str[i] != 0; i++)
//         my_putchar(str[i]);
// }

// int my_put_nbr_base(int nb, char *base)
// {
//     int size_base = my_strlen(base);

//     if (size_base < 2)
//         return (0);
//     if (nb < 0) {
//         nb = nb * - 1;
//         my_putchar('-');
//     }
//     if (nb >= size_base)
//         my_put_nbr_base(nb / size_base, base);
//     my_putchar(base[nb % size_base]);
//     return (0);
// }

// char *my_put_nbr_base_it(int nb, char *base)
// {
//     int size_base = my_strlen(base);
//     char *res = malloc(8);
//     int j = 7;

//     for (int i = 0; i != 8; i++)
//         res[i] = '0';
//     if (size_base < 2)
//         return (NULL);
//     for (; nb != 0;) {
//         if (nb < size_base) {
//             res[j] = base[nb];
//             return (res);
//         }
//         if (nb >= size_base) {
//             res[j] = base[nb % size_base];
//             nb = nb / size_base;
//             j--;
//         }
//     }
//     res[8] = 0;
//     return (res);
// }






// void print_hexa_valu(char *str)
// {
//     int size = 6;

//     for (int i = 0; i != size; i++) {
//         my_putstr(my_put_nbr_base_it(str[i], "01"));
//         my_putchar('\n');
//     }
// }

// int main(void)
// {
//     char *str = "\xff" "abcdef";

//     print_hexa_valu(str);
//     return (0);
// }