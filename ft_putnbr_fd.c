/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 09:41:08 by isaad             #+#    #+#             */
/*   Updated: 2022/01/30 09:41:21 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"
#include<unistd.h>

int	ftlen(int nb)
{
	int	j;

	j = 0;
	while (nb)
	{
		nb /= 10;
		j++;
	}
	return (j);
}

int	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;
	char			i;

	if (nb == 0)
	{
		write (fd, "0", 1);
		return (1);
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	i = nbr % 10 + '0';
	write (1, &i, 1);
	if (nb < 0)
		return (ftlen(nb) + 1);
	return (ftlen(nb));
}
