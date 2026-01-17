#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
	return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
}
int	main(void)
{
	printf("Indeksa -3, broj treba biti, -1: %d\n",
	ft_fibonacci(-1));
	printf("Indeksa 0, broj treba biti 0: %d\n",
	ft_fibonacci(0));
	printf("Indeksa 1, broj treba biti 1: %d\n",
	 ft_fibonacci(1));
	printf("Indeksa 3, broj treba biti 2: %d\n",
	 ft_fibonacci(3));
	printf("Indeksa 5, broj treba biti 5: %d\n",
	 ft_fibonacci(5));
	printf("Indeksa 8, broj treba biti 21: %d\n",
	 ft_fibonacci(8));
	return (0);
}
