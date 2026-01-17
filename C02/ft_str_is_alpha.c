#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	i = 0; // u ovom testu while nece uci da proveri test ako 
	// ako str \0,  i vratice 1.
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
		{
	 	return (0);
		}
		i++;

		return (1);
	}
}
int main(void)
{
	printf("%d\n", ft_str_is_alpha("AbCdEf"));
	printf("%d\n", ft_str_is_alpha("AbC1Ef"));
	printf("%d\n", ft_str_is_alpha(""));
	return (0);
}
