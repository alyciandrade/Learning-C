#include <stdio.h>
#include <stdlib.h>

//QUESTÃO 12 - Faça um programa que peça dois números, base e expoente.
//Mostre o primeiro número elevado ao segundo número. Não utilize a função de potência da linguagem:

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
