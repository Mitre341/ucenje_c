#include <unistd.h>
#include <stdio.h>
int	ft_is_forbidden(char *message, char *forbidden_word)
{
	int	i;
	int	j;

	i = 0;
	if (forbidden_word[0] == '\0')
	{
		return (1);
	}
	while(message[i] != '\0')
	{
		j = 0;
		while(forbidden_word[j] != '\0' && message[i + j] == forbidden_word[j])
		{
			j++;
		}
		if (forbidden_word[i] == '\0')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char *msg1 = "Ovaj sok je veoma ruzan";
	char *bad_word = "ruzan";
	char *msg2 = "Danas je divan dan u Madridu";

	printf("--- Testiranje Filter-a ---\n");

	if (ft_is_forbidden(msg1, bad_word))
		printf("Test 1: Pronadjena zabranjena rec! (Tacno)\n");
	else
		printf("Test 1: Greska, nije pronasao rec.\n");

	if (ft_is_forbidden(msg2, bad_word))
		printf("Test 2: Greska, nasao je rec gde je nema.\n");
	else
		printf("Test 2: Cisto! Nema zabranjenih reci. (Tacno)\n");

	if (ft_is_forbidden(msg2, ""))
		printf("Test 3: Prazna rec detektovana. (Tacno)\n");

	return (0);
}
