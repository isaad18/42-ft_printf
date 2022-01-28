/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <isaad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:00:38 by isaad             #+#    #+#             */
/*   Updated: 2022/01/28 13:38:09 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	printshit(int a, char format)
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

int	printhexa(int a, char format)
{
	if (a == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	else
		printshit(a, format);
	return (ft_len(a));
}
