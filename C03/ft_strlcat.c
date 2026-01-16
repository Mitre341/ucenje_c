#include <string.h>
#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s_len;
	unsigned int	d_len;
	unsigned int	j;
	unsigned int	m;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	d_len = i;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	s_len = j;
	if (size <= d_len)
	{
		return (size + s_len);
	}
	m = 0;
	while ((size - 1) > (d_len + m) && src[m] != '\0')
	{
		dest[d_len + m] = src[m];
		m++;
	}
	dest[d_len + m] = '\0';
	return (d_len + s_len);
}
int	main(void)
{
	char	dest[20] = "Zdravo";
	char	*src = " svima!";
	unsigned int size = 20;
	unsigned int result;

	printf("Pre:  |%s|\n", dest);
	result = ft_strlcat(dest, src, size);
	printf("Posle: |%s|\n", dest);
	printf("Vracena duzina: %u\n", result);
	printf("Stvarna duzina bi trebala biti: %lu\n", strlen("Zdravo") + strlen(" svima!"));

	return (0);
}
