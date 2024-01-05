//Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos. Em
//seguida o programa deve fazer a multiplicação do vetor pelas colunas da matriz.
#include<stdio.h>
#include <stdlib.h>
int main (){

    int vet[3],mat[3][3];
    
    //le vetor
    for(int i=0;i<3;i++){
        printf("Digite os elementos do vetor:[%d]",i);
        scanf("%d",&vet[i]);
    }

    //le matriz
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
               printf("Digite os elementos da matriz LIN:[%d] COL:[%d]: ",i,j);
               scanf("%d",&mat[i][j]);
        }

    //multiplicação vet * mat
    printf("\nMultiplicando o vetor pelas colunas da matriz \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",mat[i][j]*vet[i]);
        }
        printf("\n");
    }
}