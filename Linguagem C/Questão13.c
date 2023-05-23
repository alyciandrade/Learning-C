#include <stdio.h>
#include <stdlib.h>

// QUESTÃO 13

void main ()
{
    float pesokg;

    printf("Insira o peso em Kg:\n");
    scanf("%f", &pesokg);

    printf("O peso em gramas e: %.2f", pesokg*1000);
}
