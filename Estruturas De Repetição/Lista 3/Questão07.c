#include <stdio.h>
#include <stdlib.h>

//QUEST�O 7 - Mostre a soma dos n�meros �mpares de 410 at� 551:

void main()
{
    int i, soma = 0;

    for(i = 411; i <= 551; i += 2)
    {
        soma += i;
    }
    printf("soma = %i\n", soma);
}
