#include<stdio.h>
int main (){
    
    int i,v[5];

    for (i = 0; i < 5; i++){
        printf("insira um dado:\n");
        scanf("%d",&v[i]);// atribuindo valores para as 5 posicoes do vetor
    }

    printf("dados inseridos:\n");
    for (i = 0; i < 5; i++){
        printf(" %d",v[i]);// mostrando as possicoes dadas para as 5 posicoes
    }
}