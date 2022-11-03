/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <isaad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 09:41:44 by isaad             #+#    #+#             */
/*   Updated: 2022/11/03 11:33:23 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_format(va_list args, char format)
{
	int	nb;

	nb = 0;
	if (format == 'c')
		nb += ft_putchar_fd(va_arg(args, int), 1);
	if (format == 's')
		nb += ft_putstr_fd(va_arg(args, char *), 1);
	if (format == 'p')
		nb += printptr(va_arg(args, unsigned long int));
	if (format == 'd' || format == 'i')
		nb += ft_putnbr_fd(va_arg(args, long int), 1);
	if (format == 'x')
		nb += printhexa(va_arg(args, unsigned long int), 'x');
	if (format == 'X')
		nb += printhexa(va_arg(args, unsigned long int), 'X');
	if (format == 'u')
		nb += printun(va_arg(args, unsigned int));
	if (format == '%')
	{
		nb += write (1, "%", 1);
		return (1);
	}
	return (nb);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		nb;

	i = 0;
	nb = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			nb += ft_format(args, str[i + 1]);
			i++;
		}
		else
			nb += ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return (nb);
}

// int	main(void)
// {
// //	int		n;
// //	char	*j;

// //	j = "lkj";
// 	ft_printf("\n%d\n", ft_printf("%x", -1));
// 	printf("\n%d", printf("%x", -1));
// }
