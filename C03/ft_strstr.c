#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int 	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
	 	j = 0;
//najbitniji deo, poredim slova ali ako su razlicita spoljasni i se uvecava
// i onda na nekom mestu npr Banana, i je 1 j je 0, str 1+0  to je sada A == A
// i onda uvecavamo j na krjau vratim adresu od str[i]
// PAZI i se nije uvecavalo, i nece se uvecavati, kada dodjemo do toga da nam se 2 slova poklope
//uvecavam samo j, zato u return&str i je ono na kome smo uocili da su oba slova ista

		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
		return (&str[i]);
		}
		i++;
	}
	return (0);
}
int	main(void)
{
	char	*haystack = "Pazi se, igla je u plastu sena!";
	char	*needle = "igla";
	char	*not_found = "avion";
	char	*empty = "";
	char	*res;

	printf("--- Testiranje ft_strstr ---\n\n");

	// Test 1: Klasicna pretraga
	res = ft_strstr(haystack, needle);
	printf("Test 1 (Pronadjen): %s\n", res); 
	// Treba da ispisuje od reci 'igla' do kraja: "igla je u plastu sena!"

	// Test 2: Rec ne postoji
	res = ft_strstr(haystack, not_found);
	if (res == 0)
		printf("Test 2 (Nije pronadjen): NULL (Tacno!)\n");
	else
		printf("Test 2 (Greska): Vratio je nesto sto ne postoji!\n");

	// Test 3: Prazna 'igla'
	res = ft_strstr(haystack, empty);
	printf("Test 3 (Prazno): %s\n", res);
	// Treba da vrati ceo originalni haystack

	return (0);
}
