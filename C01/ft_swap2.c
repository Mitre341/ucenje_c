#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int n)
{
	// ovde fali za negativne brojeve i provera za poslednji minimalni broj
	/*
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
	ft_putchar('-');
	n = -n;
	}
	*/

	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}
void	ft_swap(int *a, int *b)
{
	int	privremena;

	privremena = *a;
	*a = *b;
	*b = privremena;
}
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 10;
	ft_putnbr(a);
	ft_putchar(' ');

	ft_putnbr(b);
	ft_putchar(' ');

	ft_swap(&a, &b);

	ft_putnbr(a);
	ft_putchar(' ');

	ft_putnbr(b);
	ft_putchar(' ');
	return (0);
}
