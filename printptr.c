#include"ft_printf.h"

void	treathex(unsigned long int num)
{
	if (num >= 16)
	{
		treathex(num / 16);
		treathex(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

void	printptr(unsigned long int num)
{
	write (1, "0x", 2);
	if (num == 0)
	{
		write (1, "0", 1);
		return ;
	}
	treathex(num);
}
