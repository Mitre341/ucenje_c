#include <unistd.h>
#include <stdio.h> // printf nam treba samo za testiranje
#include <stdlib.h> // atoi originalni za poređenje

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	i = 0;
	while (	str[i] == ' ' ||
		str[i] == '\t'||
		str[i] == '\n'||
		str[i] == '\v'||
		str[i] == '\f'||
		str[i] == '\r')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = - sign;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);

}
int	main(void)
{
	char *test1 = "  ---+--+1234ab56";
	char *test2 = "42";
	char *test3 = "   -2147483648";
	char *test4 = " \n \t \r +++---52";
	char *test5 = "abc123";

	printf("Test 1 | Očekivano: -1234 | Dobijeno: %d\n", ft_atoi(test1));
	printf("Test 2 | Očekivano: 42    | Dobijeno: %d\n", ft_atoi(test2));
	printf("Test 3 | Očekivano: -2147483648 | Dobijeno: %d\n", ft_atoi(test3));
	printf("Test 4 | Očekivano: -52   | Dobijeno: %d\n", ft_atoi(test4));
	printf("Test 5 | Očekivano: 0     | Dobijeno: %d\n", ft_atoi(test5));

	return (0);
}
