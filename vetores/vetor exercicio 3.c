//Faça um programa que leia 10 valores reais e os apresente na ordem inversa entrada
#include<stdio.h>
int main (){
    int i;
    float v[10];

    for(i=0;i<10;i++){
    printf("[%d] digite 10 valores reais:",i,i+1);
    scanf("%f",&v[i]);
    
    }
    for(i=0;i<10;i++){
        printf("%f\n",v[9-i]);
    }
}