#include <stdio.h>
#include <stdlib.h>

//QUESTÃO 1

void main()
{
    int num;
    printf("Digite um numero inteiro:\n");
    scanf("%i", &num);

    if ( num < 100)
    {
       printf("O numero %i e menor que 100", num);
    }
    else {
        printf("O numero %i e maior ou igual que 100", num);
    }
}
