#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Choose a number to start: ");
    int y = get_int("Choose a number to finish: ");
    for(int z = x; z <= y ; z++)
    {
        printf("%i\n",z);
    }
}
