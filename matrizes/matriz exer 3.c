//Crie um programa que preencha todos os valores de uma matriz 2x2,
// e em seguida exiba todos os valores e a soma de todos os valores.
#include<stdio.h>
#include <stdlib.h>
int main (){

    int mat[2][2];
    //le a matriz
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++){
               printf("Digite os elementos da matriz LIN:[%d] COL:[%d]: ",i,j);
               scanf("%d",&mat[i][j]);
        }
        //imprimi a matriz
    int res=0;
        printf("\nimprimindo a matriz toda: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",mat[i][j]);
            res = mat[i][j];// res recebe todos os valores da matriz e guarda
        }
        printf("\n");
    }

    printf("A soma de todos os valores e: %d",res*4);//res é multiplicado pela soma das posição da matriz (2+2=4)
}