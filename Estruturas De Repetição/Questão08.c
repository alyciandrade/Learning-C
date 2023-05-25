#include <stdio.h>
#include <stdlib.h>

//QUESTÃO 8 - Informa a soma dos números divisíveis por 5 de 55 até 123:

  void main ()
{
    int i, soma = 0;

    for(i = 55; i <= 120; i += 5)
    {
        soma += i;
    }
    printf("A soma = %i\n", soma);
}
