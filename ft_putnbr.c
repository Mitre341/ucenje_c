#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int n)
{
	if (n < 0)
	{
//prvo odem u fju koja ispisuje i napisem karakter
// pa onda taj broj pretvorim u pozitivan i sa njime nastavim dalje

		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

int 	main(void)
{
	ft_putnbr(42);
	write(1,"\n", 1);
	ft_putnbr(-123);
	write(1, "\n", 1);
	ft_putnbr(3);
	ft_putchar('\n');
	return (0);
}
