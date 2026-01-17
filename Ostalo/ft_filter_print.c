#include <unistd.h>

void ft_filter_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			write(1, &str[i], 1);

		}
		i++;
	}
}

int	main(void)
{
	ft_filter_print("ZdravO 42 Skolo!");
	write(1, "\n", 1);
	return (0);
}
