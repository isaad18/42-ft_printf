
#include"ft_printf.h"

int	count(unsigned int s)
{
	int	i;

    i = 0;
	while (s)
	{
		s /= 10;
		i++;
	}
	return (i);
}

void printun(unsigned int num)
{
    int i;
    char *c;

    i = count(num) + 1;
    c = (char *)malloc(i);
    c[i--] = '\0';
    while (num)
    {
        c[i] = num % 10 + '0';
        num /= 10;
    }
    while (*c)
        write (1, c++, 1);
    free (c);
}