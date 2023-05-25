#include <stdio.h>
#include <stdlib.h>

// QUESTÃO 6 - Desenvolva um programa que leia um número inteiro e positivo n. Apresente os números inteiros de 1 a n:

void main ()
{
    int i, n;

    printf("Digite um numero inteiro e positivo:\n");
    scanf("%i", &n);

    for(i = 1; i <= n; i++ )
    {
        printf("%i\n", i);
    }
}
