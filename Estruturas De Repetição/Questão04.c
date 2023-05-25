#include <stdio.h>
#include <stdlib.h>

// QUESTÃO 4 - Escreva os números divisíveis por 5 de 550 até 690:

void main ()
{
    int i;

    for(i = 550; i <= 690; i+=5)
    {
        printf("%i\n", i);
    }
}
