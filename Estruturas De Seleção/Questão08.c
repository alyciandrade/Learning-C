#include <stdio.h>
#include <stdlib.h>

//QUEST�O 8

 void main()
{
    float num;
    printf("Digite um numero:\n");
    scanf("%f", &num);

    if (num / 2 > 15){
        printf("A metade do numero digitado e MAIOR que 15");
    }
    else {
        printf("A metade do numero digitado e MENOR que 15");
    }

}
