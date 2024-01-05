#include <stdio.h>
#include <string.h> //tem q declarar para poder usar o strcpy
#include <locale.h> //permite acentos

#define n 50

int main (){
    setlocale(LC_ALL,"Portuguese");//permite q usa acentos

char s[n];
int i;

printf("digite um texto:\n");
gets(s);// nao limita o numero de caracteres dentro de uma string
i = strlen(s);//saber qnts caracteres o usuario digitou (strlen vai contar qnts caracteres tem e vai jogar pra dentro de i)
printf("\nTamanho do texto: %d\n\n",i);

printf("impressão de posição a posição:\n");
for(i=0;i<strlen(s);i++){
    printf("%c",s[i]);
    }
}