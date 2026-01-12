#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}

return (str);
}

int	main(void)
{
	char str1[] = "HOLA MUNDO";
	char str2[] = "123 ABC @#$";
	char str3[] = "";

	printf("Test 1: %s\n", ft_strlowcase(str1)); // Treba: hola mundo
	printf("Test 2: %s\n", ft_strlowcase(str2)); // Treba: 123 abc @#$
	printf("Test 3: [%s]\n", ft_strlowcase(str3)); // Treba: []

	return (0);
}
