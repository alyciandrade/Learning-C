#include <stdio.h>
#include <stdlib.h>

//QUESTÃO 3 - Escreva os números pares de 200 até 351:

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
