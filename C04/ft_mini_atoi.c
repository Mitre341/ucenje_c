#include <unistd.h>

int	mini_atoi(char *str)
{
	int	result;
	int	i;
	result = 0;
	i = 0;

	while (str[i] != '\0')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result);
}
