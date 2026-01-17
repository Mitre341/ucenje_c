#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;
	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb -1));
}
int	main(void)
{
	int	n;
	int	res;

	// Test 1: Broj 5
	n = 5;
	res = ft_recursive_factorial(n);
	printf("Faktorijal od %d je: %d (Treba da bude 120)\n", n, res);

	// Test 2: Broj 0
	n = 0;
	res = ft_recursive_factorial(n);
	printf("Faktorijal od %d je: %d (Treba da bude 1)\n", n, res);

	// Test 3: Negativan broj
	n = -2;
	res = ft_recursive_factorial(n);
	printf("Faktorijal od %d je: %d (Treba da bude 0)\n", n, res);

	return (0);
}
