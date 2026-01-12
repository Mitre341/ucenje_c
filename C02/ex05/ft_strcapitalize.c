#include <unistd.h>
#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int 	i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			// Proveravamo da li je karakter ispred (str[i-1]) NE-alfanumerički
			if (i == 0 || !( (str[i - 1] >= 'a' && str[i - 1] <= 'z') || 
			                 (str[i - 1] >= 'A' && str[i - 1] <= 'Z') || 
			                 (str[i - 1] >= '0' && str[i - 1] <= '9') ))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}


int main(void)
{
	// Test 1: Primer iz zadatka (Sve mora biti tacno)
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Test 1 (Original):\n%s\n", "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
	printf("Test 1 (Rezultat):\n%s\n\n", ft_strcapitalize(str1));

	// Test 2: Vec postojeca velika slova usred reci (Mora da ih smanji)
	char str2[] = "hELLO mY fRIEND";
	printf("Test 2 (Sredina reci):\n%s\n", ft_strcapitalize(str2)); // Treba: "Hello My Friend"

	// Test 3: Specijalni karakteri na pocetku
	char str3[] = "+++hola mundo---";
	printf("\nTest 3 (Specijalni znaci):\n%s\n", ft_strcapitalize(str3)); // Treba: "+++Hola Mundo---"

	// Test 4: Brojevi kao deo reci
	char str4[] = "abcdef42ghij";
	printf("\nTest 4 (Broj u sredini):\n%s\n", ft_strcapitalize(str4)); // Treba: "Abcdef42ghij"

	return (0);
}
