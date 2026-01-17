#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}
int	main()
{
	int n;
	n = 0;
	ft_putnbr(n);
	write(1, "\n", 1);


	ft_ft(&n);

	ft_putnbr(n);

	write(1, "\n", 1);
	return (0);
}
