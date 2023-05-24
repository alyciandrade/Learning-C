#include <stdio.h>
#include <stdlib.h>

//QUESTÃO 6

void main()
{
    int num;
    printf("Insira um numero:\n");
    scanf("%i",&num);

    if (num > 0){
        printf("O numero e POSITIVO");
    }
    else if (num == 0){
        printf("O numero e NULO");
    }
    else {
        printf("O numero e NEGATIVO");
    }
    return 0;
}
