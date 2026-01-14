#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		//dest[i + j] = src[j];
		//umesto tako da ga sabiram mogu da nastavim da uvecavam i 
		dest[i] = src[j];
		i++;
		j++;
	}
//umesto da sabiram oba ja sam uvecao i i mogu njega da iskoristim

	//dest[i + j] = '\0';
	dest[i] = '\0';
	return (dest);
}
int	main(void)
{
	char	dest[50] = "Dobar "; // Ima dovoljno mesta do 50
	char	*src = "dan!";

	printf("Pre: %s\n", dest);
	ft_strcat(dest, src);
	printf("Posle: %s\n", dest); // Treba da ispiše: Dobar dan!
	return (0);
}
