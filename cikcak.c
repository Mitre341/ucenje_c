#include <unistd.h>
int	main(void)
{
	char	slovo;
	char	veliko;
	int	korak;

	slovo = 'a';
	korak = 1;
	while (slovo <= 'z')
	{
		if (korak % 2 == 0)
		{
			veliko = slovo - 32;
			write (1, &veliko, 1);
		}
		else
		{
			write(1, &slovo, 1);
		}

		slovo++;
		korak++;
	}
	write(1, "\n", 1);
	return (0);
}
