#include<stdio.h>
int main (){

    int i;

    for ( i = 0; i <=10; i++){//contagem ate 10

        if (i==5){//qnd i for =  5 ele continua(ignora) e passa pra frente 
            continue;
        }
     printf("%d",i);
    }
}