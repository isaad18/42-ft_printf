/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printun.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 09:43:05 by isaad             #+#    #+#             */
/*   Updated: 2022/01/30 09:43:08 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_num_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_num_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (num);
}

int	printun(unsigned int n)
{
	char	*num;
	int		nb;

	nb = 0;
	if (n == 0)
		nb += write (1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		nb += ft_putstr_fd(num, 1);
		free(num);
	}
	return (nb);
}
