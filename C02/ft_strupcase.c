#include <unistd.h>
#include <stdio.h>

char *ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			//str[i] -= 32; mnogo citljivije
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}

int	main(void)
{
	char	rec[] = "zdravo 42 bAzEn!";
	printf("Pre: %s\n", rec);
	ft_strupcase(rec);
	printf("Posle: %s\n", rec);

	return (0);
}
