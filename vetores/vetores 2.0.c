#include<stdio.h>// mais compacto 
int main (){

    int i,v[5]={10,20,30,40,50};
    float m=0;

    for (i=0; i<5; i++){   
        m += v[i];        //vai fazer a soma para atribuir os {10,20,30,40,50} para 5 
    }
    printf("resultador %f\n",m/5);// divide por 5 para ter a aritimetica
}