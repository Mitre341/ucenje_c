#include <unistd.h>

int	main(void)
{
	char	c;
	int	n;
	// stavim obican broj koji saberem sa karakterom da bih dobio karakter
//tako 9 postaje '9' iz askii
	n = 9;
	c = n + '0';
	while (c >= '0')
	{
		write(1, &c, 1);
		c--;
	}
	write(1, "\n",1);
	return (0);
}
