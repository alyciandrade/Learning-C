#include <stdio.h>
#include <stdlib.h>

//QUEST�O 8 - Informa a soma dos n�meros divis�veis por 5 de 55 at� 123:

  void main ()
{
    int i, soma = 0;

    for(i = 55; i <= 120; i += 5)
    {
        soma += i;
    }
    printf("A soma = %i\n", soma);
}
