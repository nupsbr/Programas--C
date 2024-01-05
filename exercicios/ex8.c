/* de ASCENCIO e CAMPC)S, 2008) A nota final de um estudante é calculada a
partir de três notas atribuídas a um trabalho de laboratório, a uma
avaliaçao semestral e a um exame final. A média das três notas mencionadas
anteriormente aos pesos a seguir:
        NOTA                   PESO
trabalho de laboratorio          2
AVALIAÇÃO SEMESTRAL              3
EXAME FINAL                      5
faca um que receba as três notas, calcule e mostre a média e o
conceito que segue a abaixo:
Média onderada
8,0 - 10.0  = A
7.0 - 8.0   = B
6.0 - 7.0   = C
5.0 - 6.0   = D
0.0 - 5.0   = E
*/

#include <stdio.h>

int main()
{

    float n1, n2, n3, res;
    int op;
inicio:
    printf("\n\n\n");
    printf("============ESCOLA===========\n");
    printf("======Digite suas Notas======\n");
    printf("1 - Calcular!\n");
    printf("2 - Sair!\n\n");
    scanf("%d", &op);
    if (op == 1)
    {

        printf("1 NOTA PESO: 2:  \n");
        scanf("%f", &n1);
        printf("2 NOTA PESO: 3:  \n");
        scanf("%f", &n2);
        printf("3 NOTA PESO: 5:  \n");
        scanf("%f", &n3);

        res = (n1 * 2 + n2 * 3 + n3 * 5) / 10; // CALCULAR MEDIA PONDERADA

        if (res >= 8 && res <= 10)
        {
            printf("Media do aluno: %2.f  A\n", res);
        }
        if (res >= 7 && res < 8)
        {
            printf("Media do aluno: %2.f  B\n", res);
        }
        if (res >= 6 && res < 7)
        {
            printf("Media do aluno: %2.f  C\n", res);
        }
        if (res >= 5 && res < 6)
        {
            printf("Media do aluno: %2.f  D\n", res);
        }
        if (res >= 0 && res < 5)
        {
            printf("Media do aluno: %2.f  E\n", res);
        }
        system("pause");
        goto inicio;
    }
    else
    {
        printf("======FECHANDO========");
        return 0;
    }
}