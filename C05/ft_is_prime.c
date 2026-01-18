#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	i = 2;

	if (nb <= 1)
	{
		return (0);
	}
// idem sa i do kvadr. korena, cim potvrdim da je 9 % 3
// nema ostatak i vratim 0 jer broj nije prost
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
int	main(void)
{
	printf("Provera prost 3? %d\n", ft_is_prime(3));
	printf("Provera prost 8? %d\n", ft_is_prime(8));
	printf("Provera prost 9? %d\n", ft_is_prime(9));
	printf("Provera prost 13? %d\n", ft_is_prime(13));
	printf("Provera prost 12? %d\n", ft_is_prime(12));
	return (0);
}
