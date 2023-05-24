#include <stdio.h>
#include <stdlib.h>

//QUESTÃO 10

 void main ()
{
    int num;
    printf("Digite um num:\n");
    scanf("%i", &num);

    if (num % 2 == 0){
        printf("O numero e PAR");
    }
    else{
        printf("O numero e IMPAR");
    }
}
