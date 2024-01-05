/*desenvolva um algoritmo que some todos os números inteiros compreendidos entre 1 e 10 (inclusive). tem q dar 55*/

#include <stdio.h>

int main()
{
    int i = 1, soma = 0;

    while (i <= 10)
    {
        soma = soma + i;
        i = i + 1;
    }

    printf("soma: %d", soma);

    return 0;
}