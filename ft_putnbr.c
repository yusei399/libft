#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	divide(int nb)
{
	if (nb >= 10)
	{
		divide(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else if (nb <= 9)
		ft_putchar(nb % 10 + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	divide(nb);
}

int	main(void)
{
	int	i;
	i = 23;
	printf("%d", i);
}