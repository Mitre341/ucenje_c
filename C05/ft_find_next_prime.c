#include <stdio.h>

int	ft_is_prime(int	nb)
{
	int	i;
	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= nb / i && i <= 46340)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
// vracam 2 jer je 2 prvi prost broj
	if (nb <= 2)
	{
		return (2);
	}
// dok mala fja ne potvrdi da je prost ja ga vrtim i uvecavam
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
int	main(void)
{
	printf("Prvi sledeci prost broj do 1: %d\n",
	ft_find_next_prime(1));
	printf("Prvi sledeci prost broj do 13: %d\n",
	ft_find_next_prime(13));
	printf("Prvi sledeci prost broj do 15: %d\n",
	ft_find_next_prime(15));
	printf("Prvi sledeci prost broj do 22: %d\n",
	ft_find_next_prime(22));
	printf("Prvi sledeci prost broj do 34: %d\n",
	ft_find_next_prime(34));
	return (0);
}
