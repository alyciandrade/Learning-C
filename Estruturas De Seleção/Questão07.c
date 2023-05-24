#include <stdio.h>
#include <stdlib.h>

//QUESTÃO 7

 void main()
{
    int num;
    printf("Digite um numero:\n");
    scanf("%i", &num);

    if (num >= 20 && num <=90){
        printf("O numero digitado esta entre 20 e 90");
    }
    else {
        printf("O numero digitado NAO esta entre 20 e 90");
    }
}
