#include <unistd.h>
int	main(void)
{
	char	slovo;
	char	veliko;
	int	i;

	slovo = 'a';
	i = 1;
	while (slovo <= 'z')
	{	// cik cak logika na brojacu (i % 2 == 0)
		if (slovo % 2 == 0)
		{
			veliko = slovo - 32;
			write(1, &veliko, 1);
		}
		else
		{
			write(1, &slovo, 1);
		}
		if (i % 5 == 0)
		{
			write(1, " ", 1);
			// i == 0; za novih 5 slova
		}
		i++;
		slovo++;
	}
	write(1, "\n", 1);
	return (0);
}
