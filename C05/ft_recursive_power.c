#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * (ft_recursive_power(nb, power -1)));
}

int	main(void)
{
	printf("5^2 = %d (Ocekivano: 25)\n", ft_recursive_power(5, 2));
	printf("2^0 = %d (Ocekivano: 1)\n", ft_recursive_power(2, 0));
	printf("3^3 = %d (Ocekivano: 27)\n", ft_recursive_power(3, 3));
	return (0);
}
