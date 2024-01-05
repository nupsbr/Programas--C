//(Adaptado de ASCENCIO e CAMPOS. Faça um programa que receba quatro
// números inteiros, calcule e mostre a soma desses números,
#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, s;

    printf("Digite 4 numeros ineiro sem sequencia: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    s = n1 + n2 + n3 + n4;

    printf("Soma dos numeros:%d ", s);
}