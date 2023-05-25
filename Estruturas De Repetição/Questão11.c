#include <stdio.h>
#include <stdlib.h>

//QUESTÃO 11 - Leia um número e mostre o seu fatorial. Exemplo, fatorial de 5! = 5 × 4 × 3 × 2 × 1 = 120:

void main ()
{
    float num, i = 1, fat = 1;

    printf("Digite um numero inteiro nao negativo:\n");
    scanf("%f", &num);

    for(i = 1; i <= num; i++)
    {
        fat *= i;
    }
    printf("O fatorial do numero digitado e: %.2f", fat);

}
