#include <stdio.h>
#include <string.h> //tem q declarar para poder usar o strcpy
#include <locale.h> //permite acentos

#define n 50

int main (){
    setlocale(LC_ALL,"Portuguese");//permite q usa acentos

char hardtext[n] = {"/exit"};
char senha_usr[n]; //   SIMULANDO UMA SENHA (se os textos sao iguais)
int ok;

printf("digite um texto: \n");
gets(senha_usr);

ok = strcmp(hardtext, senha_usr);//strcmp compara oq foi digitado com oq ta salvo na string

if(ok == 0)
    printf("Textos iguais. \n");
else
    printf("Textos diferente. \n");
}