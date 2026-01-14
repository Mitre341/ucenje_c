#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
int	main(void)
{
	char *s1 = "Testiramo";
	char *s2 = "Testovi";

	printf("--- Testiranje ft_strncmp ---\n\n");

	// TEST 1: n = 0 (Mora vratiti 0)
	printf("Test 1 (n=0): %d\n", ft_strncmp(s1, s2, 0));

	// TEST 2: n = 4 (Poredimo samo "Test" i "Test")
	// Prva 4 slova su ista, treba da vrati 0
	printf("Test 2 (n=4): %d\n", ft_strncmp(s1, s2, 4));

	// TEST 3: n = 5 (Poredimo "Testi" i "Testo")
	// Razlika izmedju 'i' i 'o'
	printf("Test 3 (n=5): %d\n", ft_strncmp(s1, s2, 5));

	// TEST 4: Jedan string je kraci
	printf("Test 4 (Kratak): %d\n", ft_strncmp("Ab", "Abcde", 10));

	return (0);
}
