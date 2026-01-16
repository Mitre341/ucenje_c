#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
//INT_MIN njega upisujemo direktno peske
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return; // da ne bi ispisivao i nastavljao dalje
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
// 3. REKURZIJA: Ako broj ima više od jedne cifre, 
//"pošalji" ga opet u funkciju ali bez zadnje cifre.
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}
int	main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	return (0);
}
