#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}
void    ft_putnbr(int   n)
{
        if (n > 9)
        {
                ft_putnbr(n / 10);
        }
        ft_putchar(n % 10 + '0');
}
void    ft_ultimate_check(char *str, int *len)
{
        int     i;
        i = 0;
        while (str[i] != '\0')
        {
                i++;
        }
        *len = i;

        if (str[0] == 'a')
        {
                str[0] = 'A';
        }

}
int     main(void)
{
        char    s[] = "Welcome";
        int     duzina;

        duzina = 0;
        ft_ultimate_check(s, &duzina);
        ft_putnbr(duzina);
return (0);
}
