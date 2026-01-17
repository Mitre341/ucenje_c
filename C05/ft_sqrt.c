#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
//specijalan slucaj mada bi petlja ovo resila
	if (nb == 1)
	{
	return (1);
	}
	while (i <= nb / i && i <= 46340)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;

	}
// ako je zavrsila ali nismo nasli i*i == nb
	return (0);
}
int	main(void)
{
	printf("Koren od -5 je 0: %d\n", ft_sqrt(-5));
	printf("Koren od 0 je 0: %d\n", ft_sqrt(0));
	printf("Koren od 8 je 2...: %d\n", ft_sqrt(8));
	printf("Koren od 9 je 3: %d\n", ft_sqrt(9));
	printf("Koren od 25 je 5: %d\n", ft_sqrt(25));
}
