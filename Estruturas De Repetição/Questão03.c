#include <stdio.h>
#include <stdlib.h>

//QUEST�O 3 - Escreva os n�meros pares de 200 at� 351:

void main ()
{
    int i;

    for (i = 200; i < 351; i++)
    {

        if (i % 2 == 0)
        {
            printf("%i\n", i);

        }
    }
}
