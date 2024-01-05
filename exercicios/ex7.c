/*um algoritmo que simule uma calculadora. voce deve dar a opçào de a opção de o
usuário escolher entre: 1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir. O usuário só
conseguirá processar dois números inteiros por vez.*/

#include <stdio.h>

int main()
{

    int op;
inicio: // usa : para o GOTO voltar
    printf("====BEM-VINDO A CALCULADORA 3000====\n");
    printf("======ESCOLHA UMA DESSAS OPCOES=====\n");

    printf("1 - Somar!\n");
    printf("2 - Subtrair!\n");
    printf("3 - Multiplicar!\n");
    printf("4 - Dividir!\n");
    printf("5 - Sair!\n\n");
    scanf("%d", &op);

    if (op == 1) // SOMA
    {
        int n1, n2, res;
        printf("========SOMA========\n");
        printf("Valor: \n");
        scanf("%d", &n1);
        printf("Valor: \n");
        scanf("%d", &n2);

        res = n1 + n2;

        system("pause");
        printf("Resultado: %d\n\n", res);
        goto inicio; // volta ao inicio:
    }
    if (op == 2) // SUBTRAI
    {
        int n1, n2, res;
        printf("======SUBTRAIR=======\n");
        printf("Valor: \n");
        scanf("%d", &n1);
        printf("Valor: \n");
        scanf("%d", &n2);

        res = n1 - n2;

        printf("Resultado: %d\n\n", res);
        system("pause");
        goto inicio; // volta ao inicio:
    }
    if (op == 3) // MULTIPLICA
    {
        int n1, n2, res;
        printf("=======MULTIPLICAR======\n");
        printf("Valor: \n");
        scanf("%d", &n1);
        printf("Valor: \n");
        scanf("%d", &n2);

        res = n1 * n2;

        printf("Resultado: %d\n\n", res);
        system("pause");
        goto inicio; // volta ao inicio:
    }
    if (op == 4) // DIVIDIR
    {
        float n1, n2, res;
        printf("======DIVIDIR======\n");
        printf("Valor: \n");
        scanf("%f", &n1);
        printf("Valor: \n");
        scanf("%f", &n2);

        res = n1 / n2;

        printf("Resultado: %0.f\n\n", res);
        system("pause");
        goto inicio; // volta ao inicio:
    }
    if (op == 5) // SAIR
    {
        printf("======FECHAR CALCULADORA 3000======\n");
        return 0;
    }
}