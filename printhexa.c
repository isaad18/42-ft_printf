
#include"ft_printf.h"

void    printshit(int a, char format)
{
    if (a >= 16)
    {
        printshit(a / 16, format);
        printshit(a % 16, format);
    }
    else
    {
        if (a >= 10)
        {
            if (format == 'x')
                ft_putchar_fd(a - 10 + 'a', 1);
            if (format == 'X')
                ft_putchar_fd(a - 10 + 'A', 1);
        }
        if (a < 10)
            ft_putchar_fd(a + '0', 1);
    }
}

void    printhexa(int a, char format)
{
    if (a == 0)
        return ;
    else
        printshit(a, format);
}