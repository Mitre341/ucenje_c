#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(void)
{
	char *s1 = "Bravo";
	char *s2 = "Bravo";
	char *s3 = "Abeceda";
	char *s4 = "Zebra";

	printf("--- Testiranje ft_strcmp ---\n\n");

	// Test 1: Identični stringovi
	printf("Test 1 (Isti): %d\n", ft_strcmp(s1, s2)); 
	// Treba da ispiše 0

	// Test 2: s3 ("Abeceda") vs s4 ("Zebra")
	// 'A' (65) - 'Z' (90) = -25
	printf("Test 2 (Manji): %d\n", ft_strcmp(s3, s4));

	// Test 3: s4 ("Zebra") vs s3 ("Abeceda")
	// 'Z' (90) - 'A' (65) = 25
	printf("Test 3 (Veci): %d\n", ft_strcmp(s4, s3));

	// Test 4: Poređenje sa praznim stringom
	printf("Test 4 (Prazan): %d\n", ft_strcmp("A", ""));

	return (0);
}
