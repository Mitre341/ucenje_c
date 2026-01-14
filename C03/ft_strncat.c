#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0' && j < nb) // ovde ne mora -1
// logika sa < upisuje 3 karaktera taman i stane kod  3 < 3
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
int	main(void)
{
	char	dest1[50] = "Dobar ";
	char	dest2[50] = "Dobar ";
	char	*src = "danasnji dan";

	printf("--- Testiranje ft_strncat ---\n\n");

	// Test 1: nb je manje od src (treba da uzme samo "dan")
	ft_strncat(dest1, src, 3);
	printf("Test 1 (nb=3): %s\n", dest1); // Ocekivano: Dobar dan

	// Test 2: nb je vece od src (treba da uzme sve do \0)
	ft_strncat(dest2, src, 20);
	printf("Test 2 (nb=20): %s\n", dest2); // Ocekivano: Dobar danasnji dan

	return (0);
}
