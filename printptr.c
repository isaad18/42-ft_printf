
#include"ft_printf.h"

int countadd(int num)
{
    int i;

    i = 0;
    while (num)
    {
        num /= 16;
        i++;
    }
    return (i);
}

void    printptr(unsigned long int num)
{
    int i;
    char *s;
    int j;

    write (1, "0x", 2);
    if (num == 0)
    {
        write (1, "0", 1);
        return ;
    }
    i = countadd(num) + 1;
    s = (char *)malloc(i);
    if (!s)
        return ;
    s[i] = '\0';
    i--;
    while (num)
    {
        s[i] = num % 16 + '0';
        num /= 16;
        i--;
    }
    j = ft_atoi(s);
    free (s);
    printhexa(j, 'x');
}