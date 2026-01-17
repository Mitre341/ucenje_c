#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

int	main(void)
{
	int n;
	int p;

	n = 5;
	p = 2;

	printf("2^3 = %d\n", ft_iterative_power(2, 3));
	printf("5^0 = %d\n", ft_iterative_power(5, 0));
	printf("2^-1 = %d\n", ft_iterative_power(2, -1));
	return (0);
}


