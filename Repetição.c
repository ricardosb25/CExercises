#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Digite um numero para começar: ");
    int y = get_int("Digite um numero para terminar: ");
    for(int z = x; z <= y ; z++)
    {
        printf("%i\n",z);
    }
}
