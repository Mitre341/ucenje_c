#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);

}
int	main(void)
{
	char	str[] = "hola Mundo 123";
	printf("Pre: %s\n", str);
	ft_strupcase(str);
	printf("Posle: %s\n", str); // Treba da ispiše: HOLA MUNDO 123
	return (0);
}
