#include <stdio.h>
#include <stdlib.h>

//QUESTÃO 9

 void main ()
{
    int num;
    printf("Digite um numero:\n");
    scanf("%i", &num);

    if (num % 3 == 0){
        printf("O numero e divisivel por 3");
    }
    else {
        printf("O numero NAO e divisivel por 3");
    }
}
