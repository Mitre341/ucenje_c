#include <unistd.h>

void	ft_print_comb_easy(void)
{
	int	a;
	int	b;

	a = '0';
//a je najbolje da je karakter je posle ispisujem karaktere
	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			if (!(a == '8' && b == '9'))
			{
				write(1, ", ", 2);
			}
			b++;
			//b++; ide na kraj da bi ovaj zarez u ifu funkcionisao.
		}
	a++;
	}
}
int	main(void)
{
	ft_print_comb_easy();
	write(1, "\n", 1);
	return (0);
}
