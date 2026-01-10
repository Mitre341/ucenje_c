#include <unistd.h>

void	ft_simple_pyramid(int n)
{
	if (n <= 0)
	{
		return;
	}
		write(1, "*", 1);
	ft_simple_pyramid(n - 1);
}

int	main(void)
{
	ft_simple_pyramid(3);
	write(1, "\n", 1);
	return (0);
}
