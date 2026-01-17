#include <unistd.h>
#include <stdio.h>

void ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}

int	main(void)
{
	ft_print_numbers();
	// pisi novi red da bi bio bash u sledecem redu
	write(1, "\n", 1);
	return (0);
}
