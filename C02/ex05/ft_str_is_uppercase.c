#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] < 'A' || str[i] > 'Z')
		{
		return (0);
		}
		i++;
	}
	return (1);
}
int	main(void)
{
	printf("--- Testiranje ft_str_is_uppercase ---\n");

	// Test 1: Samo velika (Očekivano: 1)
	printf("Test 1 (SOLO): %d\n", ft_str_is_uppercase("SOLO"));

	// Test 2: Ima malo slovo (Očekivano: 0)
	printf("Test 2 (SolO): %d\n", ft_str_is_uppercase("SolO"));

	// Test 3: Prazan string (Očekivano: 1)
	printf("Test 3 (prazno): %d\n", ft_str_is_uppercase(""));

	// Test 4: Brojevi i razmaci (Očekivano: 0)
	printf("Test 4 (A B 1): %d\n", ft_str_is_uppercase("A B 1"));

	return (0);
}
