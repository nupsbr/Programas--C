#include <stdio.h>
int main(){
 int i;

 for (i=0;i<=10;i++){// é pra fazer a contagem ate 10
    printf("%d",i);

    if (i == 5){// porem o if com o break para a repetição no 5
        break;
    }
 }
}