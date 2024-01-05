//Altere o programa anterior para calcular e apresentar a média dos valores entrados e aqueles que são
// maiores e menores que a média. 
#include<stdio.h>
int main (){

    int j,i,v[5],soma=0,me=0;

    for(i=0;i<5;i++){
        printf("insire 5 valores para serem somados:");
        scanf("%d",&v[i]);
        soma += (v[i]);   
    }
      me = soma/5; 
    printf("\nMedia: %d\n",me);

    for(i=0;i<5;i++){
    if(me<v[i]){
        printf("%d MAIOR que a media\n",v[i]);
    }
    }
    
    for(i=0;i<5;i++){
    if(me>v[i]){
        printf("%d MENOR que a media\n",v[i]);
    }
    }
}