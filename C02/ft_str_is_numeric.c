#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	i = 0;
	while ( str[i] != '\0')
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return(1);
}
int	main(void)
{
	printf("Test 1 (12345): %d\n", ft_str_is_numeric("12345"));
	printf("Test 2 (12a45): %d\n", ft_str_is_numeric("12a45"));
	printf("Test 3 (prazno): %d\n", ft_str_is_numeric(""));
	return (0);
}
