//Faça um programa que lê uma matriz de 3 x 3 elementos usando um comando for,
//multiplica cada elemento por 5 e imprime o resultado. 
#include<stdio.h>
int main (){

    int mat[3][3];

    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
               printf("digite os elementos da matriz[%d]: \n",j+1);
               scanf("%d ",&mat[i][j]);
        }
       
    }
    printf("\nresultado de toda a matriz multiplicado por 5: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",mat[i][j]*5);
        }
        printf("\n");
    }




}