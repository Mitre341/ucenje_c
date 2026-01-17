#include <unistd.h>

void	ft_print_row(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, "#", 1);
		i++;
	}
	write(1, "\n", 1);
}
void	ft_triangle_recursion(int n)
{
	if (n <= 0)
	{
		return;
	}
// za obrnutu samo zameni f je prvo jedna pa druga
//	ft_print_row(n);
//	ft_triangle_recursion(n - 1);
	ft_triangle_recursion(n -1);
	ft_print_row(n);
}

int	main(void)
{
// '3' je broj 51 zato mu dajes broj 3 bez zagrada ovde
	ft_triangle_recursion(3);
	write(1, "\n", 1);
	return (0);
}

