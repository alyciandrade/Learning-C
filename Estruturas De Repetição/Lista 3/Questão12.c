#include <stdio.h>
#include <stdlib.h>

//QUEST�O 12 - Fa�a um programa que pe�a dois n�meros, base e expoente.
//Mostre o primeiro n�mero elevado ao segundo n�mero. N�o utilize a fun��o de pot�ncia da linguagem:

void main ()
{
    int base, exp, i, x = 1;

    printf("Digite o numero da BASE:\n");
    scanf("%i", &base);
    printf("Digite o numero do EXPOENTE:\n");
    scanf("%i", &exp);

    for(i = 0; i < exp; i++)
    {
        x *= base;
    }
    printf("RESULTADO: %i", x);
}
