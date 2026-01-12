#include <unistd.h>
#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
		return (0);
		}
		i++;
	}
	return (1);
}
int	main(void)
{
	printf("Test 1 (Normalno): %d\n", ft_str_is_printable("Abc 123!")); // Očekivano: 1
	printf("Test 2 (Sa Enterom): %d\n", ft_str_is_printable("Line\nBreak")); // Očekivano: 0
	printf("Test 3 (Prazno): %d\n", ft_str_is_printable("")); // Očekivano: 1
	return (0);
}
