#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void my_putchar(char c);
int my_alphaisprint(char c);
void my_put_nbr_base(int nb, char *base);

void my_showstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(my_alphaisprint(str[i]))
		{
			my_putchar(str[i]);
		}
		else
		{
			my_putchar('\\');
			if(str[i] < 16)
			{
				my_putchar('0');
			}
			my_put_nbr_base(str[i], "0123456789abcdef");
		}
		i = i + 1;
	}
}

int main(void)
{
    my_showstr("");
    return 0;
}