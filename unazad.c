#include <unistd.h>
int	main(void)
{
	int	i;
	char	c;

	i = 9;
	while (i >= 0)
	{
		c = i + '0';
		write(1, &c, 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}
