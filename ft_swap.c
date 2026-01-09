#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	privremena;

	privremena = *a;
	*a = *b;
	*b = privremena;
}

int main(void)
{
	int x;
	int y;

	x = 5;
	y = 10;

	printf("Pre: x = %d, y = %d\n", x, y);

	ft_swap(&x, &y);

	printf("Posle: x = %d, y = %d\n", x, y);

	return (0);

}
