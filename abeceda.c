#include <unistd.h>

int main (void)
{
char slovo;

slovo = 'a';

while(slovo <= 'z')
{
write(1, &slovo, 1);
slovo++;
}
write(1, "\n", 1);
return 0;
}
