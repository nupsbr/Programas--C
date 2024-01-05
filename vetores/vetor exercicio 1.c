//Faça um programa que leia 5 valores inteiros, armazeno-os em um vetor, calcule e apresente a soma destes valores. 
#include <stdio.h>
int main (){

    int i,v[5],soma=0;

    for(i=0;i<5;i++){
        printf("insire 5 valores para serem somados:");
        scanf("%d",&v[i]);
        soma += v[i];
    }
 printf("res: %d",soma);
}