
#include "ft_printf.h"

void    ft_format(va_list args, char format)
{
    if (format == 'c')
        ft_putchar_fd(va_arg(args, int), 1);
    if (format == 's')
        ft_putstr_fd(va_arg(args, char *), 1);
    if (format == 'p')
        printptr(va_arg(args, unsigned long int));
    if (format == 'd' || format == 'i')
        ft_putnbr_fd(va_arg(args, long int), 1);
    if (format == 'x')
        printhexa(va_arg(args, long int), 'x');
    if (format == 'X')
        printhexa(va_arg(args, long int), 'X');
    if (format == 'u')
        printun(va_arg(args, unsigned int));
    if (format == '%')
        write (1, "%", 1);
}

int    ft_printf(const char *str, ...)
{
    int i;
    va_list args;

    i = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            ft_format(args, str[i + 1]);
            i++;
        }
        else
            ft_putchar_fd(str[i], 1);
        i++;
    }
    va_end(args);
    return (0);
}