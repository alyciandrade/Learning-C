#include <stdio.h>
#include <stdlib.h>

//QUEST�O 9 - Escreva a soma dos n�meros m�ltiplos de 3 e por 5 entre 356 e 455:

void main ()
{
    int i, soma = 0;

    for (i = 360; i <= 450; i += 15)
    {
        soma += i;
    }
    printf("A soma e: %i\n", soma);
}
