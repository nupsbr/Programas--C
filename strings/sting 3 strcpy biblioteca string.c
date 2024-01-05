#include <stdio.h>// USAR COMPILADOR C ONLINE
#include <string.h> //tem q declarar para poder usar o strcpy
#include <locale.h> //permite potuação

#define n 20
int main (){
    setlocale(LC_ALL,"Portuguese");//permite q usa acentos

char origem[n] = {"ola mundo!"};
char destino[n];

printf("antes de strcpy:\n");
puts(origem);
puts(destino);

strcpy(destino,origem); //usa para atribuir um dado para outra stringo ex: (destino = origem)

printf("depois de strcpy:\n");
puts(origem);
puts(destino);
}