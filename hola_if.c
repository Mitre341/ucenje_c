#include <unistd.h>

int main(void)
{
char letra;
letra = 'a';
while(letra <= 'z')
{
if(letra != 'x'){

write(1, &letra, 1);

}
letra++;
}
write(1, "\n", 1);
return (0);
}

