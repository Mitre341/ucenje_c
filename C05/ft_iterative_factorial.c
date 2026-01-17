#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0 )
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
// ovo je faktorijal u matimeatici n! (mnozi svaki broj sa svakim ispod njega)
// 5! = 5 * 4 * 3 * 2 * 1
		result = result * nb;
		nb--;
	}
	return (result);
}
int	main(void)
{
	printf("0! = %d (Ocekivano: 1)\n", ft_iterative_factorial(0));
	printf("1! = %d (Ocekivano: 1)\n", ft_iterative_factorial(1));
	printf("5! = %d (Ocekivano: 120)\n", ft_iterative_factorial(5));
	printf("10! = %d (Ocekivano: 3628800)\n", ft_iterative_factorial(10));
	printf("-5! = %d (Ocekivano: 0)\n", ft_iterative_factorial(-5));
	return (0);
}
