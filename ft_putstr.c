#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int	main(void)
{
	char *moja_rec;
	moja_rec = "Zdravo 42!";
	ft_putstr(moja_rec);
	write(1, "\n", 1);
	return (0);
}

