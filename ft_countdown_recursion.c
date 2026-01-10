#include <unistd.h>
void	ft_countdown_recursion(char c)
{
	if (c >= '0')
	{
		write(1, &c, 1);
// u fji uvek c -1 ne c-- jer ce prvo poslati c pa ga tek oduzeti
// tako se ostaje u vecitoj fji
		ft_countdown_recursion(c - 1);

// za obrnut redosled  count up prvo pozoves fju pa je tek onda ispises
//komp prvo mora da zavrsi fju pa da pozove write.
//i onda ispise sve na gore. 
	}
}
int	main(char c)
{
	ft_countdown_recursion('3');
	write(1, "\n", 1);
	return (0);
}
