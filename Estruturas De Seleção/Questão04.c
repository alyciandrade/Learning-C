#include <stdio.h>
#include <stdlib.h>

//QUESTÃO 4

void main()
{
    int num;
    printf("Digite um numero:\n");
    scanf("%i", &num);

    if(num > 0 && num < 10)
    {
        printf("OK\n");
    }
}
