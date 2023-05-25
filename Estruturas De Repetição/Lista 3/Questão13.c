#include <stdio.h>
#include <stdlib.h>

//QUESTÃO 13 - Apresente a média dos números ímpares de 50 até 85:

void main ()
{
    int i, soma = 0;
    float media;

    for(i = 51; i <= 85; i+=2)
    {

        soma += i;
        media = soma / 18;
    }

    printf("MEDIA: %.0f", media);
}
