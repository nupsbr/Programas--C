/*(Adaptado de ASCENCIO e CAMPOS, faça um que receba o salário de
um funcionário e o de aumento, calcule e mostre o valor do aumento e o
novo salário.*/

#include <stdio.h>

int main()
{

    float sal, por, au, novosa;

    printf("Digite o valor do salario: ");
    scanf("%f", &sal);

    printf("Digite o aumento em porcentagem: ");
    scanf("%f", &por);

    au = sal * por / 100;
    novosa = sal + au;
    printf("valor do aumento: %2.f", au);
    printf("valor do novo salaraio: %2.f", novosa);

    return 0;
}
