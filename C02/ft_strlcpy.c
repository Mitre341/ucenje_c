#include <stdio.h>
#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	j = 0;
	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	if (size > 0)
	{
		while (src[j] != '\0' && j < (size - 1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}
int	main(void)
{
	char	src[] = "42 Belgrade";
	char	dest[20];
	unsigned int	ret;

	printf("Izvorni string (src): %s (Duzina: 11)\n\n", src);

	// TEST 1: Normalno kopiranje (ima dovoljno mesta)
	ret = ft_strlcpy(dest, src, 20);
	printf("Test 1 (Size 20): dest = \"%s\", return = %u\n", dest, ret);

	// TEST 2: Skraceno kopiranje (size je manji od stringa)
	// Treba da kopira samo 4 karaktera i doda \0
	ret = ft_strlcpy(dest, src, 5);
	printf("Test 2 (Size 5):  dest = \"%s\", return = %u\n", dest, ret);

	// TEST 3: Size je 0 (ne sme nista da kopira niti da pukne)
	char dest_small[5] = "AAAA";
	ret = ft_strlcpy(dest_small, src, 0);
	printf("Test 3 (Size 0):  dest = \"%s\", return = %u\n", dest_small, ret);

	return (0);
}
