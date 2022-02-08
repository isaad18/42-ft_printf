/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 09:42:18 by isaad             #+#    #+#             */
/*   Updated: 2022/01/30 09:42:23 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>
# include<stdarg.h>

int		ft_putstr_fd(char *s, int fd);

int		ft_putnbr_fd(int nb, int fd);

int		ft_putchar_fd(char c, int fd);

int		printhexa(unsigned int a, char format);

int		printptr(unsigned long int num);

int		ft_atoi(const char *str);

int		ft_printf(const char *str, ...);

int		printun(unsigned int num);

#endif
