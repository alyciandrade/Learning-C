#include <stdio.h>
#include <stdlib.h>

// QUEST�O 13

void main ()
{
    float pesokg;

    printf("Insira o peso em Kg:\n");
    scanf("%f", &pesokg);

    printf("O peso em gramas e: %.2f", pesokg*1000);
}
