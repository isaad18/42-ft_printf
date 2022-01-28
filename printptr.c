/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <isaad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:59:38 by isaad             #+#    #+#             */
/*   Updated: 2022/01/28 13:47:58 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

// int	ftl_len(unsigned	int num)
// {
// 	int	len;

// 	len = 0;
// 	while (num != 0)
// 	{
// 		len++;
// 		num = num / 16;
// 	}
// 	return (len);
// }

int	treathex(unsigned long int num, int count)
{
	count = 0;
	if (num >= 16)
	{
		count += treathex(num / 16, count);
		count += treathex(num % 16, count);
	}
	else
	{
		if (num <= 9)
			count += ft_putchar_fd((num + '0'), 1);
		else
			count += ft_putchar_fd((num - 10 + 'a'), 1);
	}
	return (count);
}

int	printptr(unsigned long int num)
{
	int	count;

	count = 0;
	write (1, "0x", 2);
	if (num == 0)
	{
		write (1, "0", 1);
		return (3);
	}
	count = treathex(num, count);
	return (count + 2);
}
