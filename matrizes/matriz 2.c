#include<stdio.h> //imprimir a matriz toda

int main (){

int mat[3][3] = {{1,2,3},
                 {4,5,6},//declarando as linhas 
                 {7,8,9}};

int i,j;
//imprimindo so 1 linha
printf("imprimindo a primeira linha:\n");
    for ( j = 0; j < 3; j++){
   printf("%d ",mat[0][j]);
    }
//imprimindo toda a matriz
printf("\nimprimindo a matriz toda: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    



}