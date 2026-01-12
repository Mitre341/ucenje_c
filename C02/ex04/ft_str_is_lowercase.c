#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
	//if (str[i] < 'a' || str[i] > 'z') jednostavnije jer trazim sve izvan malih slova
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int	main(void)
{
	printf("--- Testiranje ft_str_is_lowercase ---\n");

	// Test 1: Samo mala slova (Očekivano: 1)
	printf("Test 1 (todoenminusculas): %d\n", ft_str_is_lowercase("todoenminusculas"));

	// Test 2: Ima jedno veliko slovo (Očekivano: 0)
	printf("Test 2 (vivaEspana): %d\n", ft_str_is_lowercase("vivaEspana"));

	// Test 3: Brojevi unutra (Očekivano: 0)
	printf("Test 3 (hola123): %d\n", ft_str_is_lowercase("hola123"));

	// Test 4: Prazan string (Očekivano: 1)
	printf("Test 4 (prazno): %d\n", ft_str_is_lowercase(""));

	// Test 5: Razmaci (Očekivano: 0 jer razmak nije a-z)
	printf("Test 5 (hola mundo): %d\n", ft_str_is_lowercase("hola mundo"));

	return (0);
}
