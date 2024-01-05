#include <stdio.h>
#include <string.h> //tem q declarar para poder usar o strcpy
#include <locale.h> //permite acentos

#define n 50

int main (){
    setlocale(LC_ALL,"Portuguese");//permite q usa acentos

char s1[n] = {"lógica de"};
char s2[n]= {"programação!"};

printf("Antes do strcat: \n");
printf("str1: %s\n",s1);
printf("str2: %s\n",s2);

strcat(s1,s2);//usa para "colar" uma string na outra/ somar

printf("depois do strcat: \n");
puts(s1);

}