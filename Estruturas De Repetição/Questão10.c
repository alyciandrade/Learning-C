#include <stdio.h>
#include <stdlib.h>

//QUEST�O 10 - Informe o produto dos n�meros pares de 43 at� 77:

void main ()
{
    float i, produto = 1;

    for(i = 44; i <= 76; i += 2)
    {
        produto *= i;
    }
    printf("O produto dos numeros e: %.2f\n", produto);
}
