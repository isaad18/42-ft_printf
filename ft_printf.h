#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>

void	ft_putstr_fd(char *s, int fd);

void	ft_putnbr_fd(int nb, int fd);

void	ft_putchar_fd(char c, int fd);

void	printhexa(int a, char format);

void	printptr(unsigned long int num);

int		ft_atoi(const char *str);

int		ft_printf(const char *str, ...);

void	printun(unsigned int num);

#endif
