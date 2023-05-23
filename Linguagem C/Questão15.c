#include <stdio.h>
#include <stdlib.h>

void main ()
{
    float salariopessoa;

    printf("Insira o valor do salario:\n");
    scanf("%f", &salariopessoa);

    printf("Voce recebe %.2f salarios minimo\n", salariopessoa/954);
}
