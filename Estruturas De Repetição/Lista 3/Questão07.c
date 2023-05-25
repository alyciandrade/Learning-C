#include <stdio.h>
#include <stdlib.h>

//QUESTÃO 7 - Mostre a soma dos números ímpares de 410 até 551:

void main()
{
    int i, soma = 0;

    for(i = 411; i <= 551; i += 2)
    {
        soma += i;
    }
    printf("soma = %i\n", soma);
}
