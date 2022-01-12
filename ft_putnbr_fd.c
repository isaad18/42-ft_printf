
#include"printf.h"
#include<unistd.h>

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;
	char i;

	if (nb < 0)
	{
		write (1, "-", 1);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	i = nbr % 10 + '0';
	write (1, &i, 1);
}
