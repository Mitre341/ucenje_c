#include <unistd.h>

//argc je uvek int a argv je uvek char **
int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
// OVDE ide void! Kažeš: "Imam argc, ali ga neću koristiti."
	i = 0;
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i++;
	}
// "\n" dupli navodnici nas vode na adresu u ovom slucaju
// ili da deklarisem novu varijablu koja ce na adresi imati '\n'
	write(1, "\n", 1);
	return (0);
}
