/*(Adaptado de ASCENCIO e CAMPOS, Faça um programa que receba dois números
e mostre o maior deles. Caso eles sejam iguais, deve-se mostrar a mensagem "os
números sao iguais".*/

#include <stdio.h>

int main()
{
    float n1, n2;

    printf("COMPARANDO DOIS NUMEROS!!!\n\n");

    printf("Digite o 1 numero:");
    scanf("%f", &n1);
    printf("Digite o 2 numero:");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        printf("Este e maior: %2.f", n1);
    }
    else if (n1 < n2)
    {
        printf("Este e maior: %2.f", n2);
    }
    else
    {
        printf("os numeros sao iguais");
    }

    return 0;
}