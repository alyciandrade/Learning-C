#include <stdio.h>
#include <stdlib.h>

//QUEST�O 13 - Apresente a m�dia dos n�meros �mpares de 50 at� 85:

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
