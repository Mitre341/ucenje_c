#include <unistd.h>
#include <stdio.h> // samo za test

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int 	main(void)
{
	char source[] = "Hola!";
	char destination[10];

	ft_strcpy(destination, source);
	printf("Source: %s\n", source);
	printf("Dest: %s\n", destination);

	return (0);
}
