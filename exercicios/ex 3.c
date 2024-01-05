//(Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três notas e
// seus respectivos pesos, calcule e mostre a média ponderada dessas notas.

// JEITO CRU E SIMPLES

#include <stdio.h>

int main()
{

    float n1, n2, n3, p1, p2, p3, media;

    printf("Digite a 1 nota: ");
    scanf("%f", &n1);
    printf("Digite o 1 PESO: ");
    scanf("%f", &p1);

    printf("Digite a 2 nota: ");
    scanf("%f", &n2);
    printf("Digite o 2 PESO: ");
    scanf("%f", &p2);

    printf("Digite a 3 nota: ");
    scanf("%f", &n3);
    printf("Digite o 3 PESO: ");
    scanf("%f", &p3);

    media = (n1 * p1 + n2 * p2 + n3 * p3)/10; // calcular media ponderada

    printf("Sua media ponderada e: %2.f", media);

    return 0;
}
