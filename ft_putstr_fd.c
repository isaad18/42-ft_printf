/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 09:42:38 by isaad             #+#    #+#             */
/*   Updated: 2022/01/30 09:42:41 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"
#include<unistd.h>

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write (fd, "(null)", 6);
		return (6);
	}
	if (!s)
		return (0);
	while (*s)
	{
		write (fd, s++, 1);
		i++;
	}
	return (i);
}
