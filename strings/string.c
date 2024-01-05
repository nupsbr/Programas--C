#include <stdio.h>
int main (){

char s[10];

//jeito errado (nao aceita espaços)
printf("Digite algo com espaços (scanf convencional):\n");
scanf("%s", s);
fflush (stdin);// entrada de dado padrao (teclado)

printf("resultado: %s\n\n",s);

//jeito certo q le com espaços
printf("digite algo com espaços (scanf aprimorado):\n");
scanf("%10[^\n]s", s); //vai ler com espaços
fflush(stdin);//CHAMAR SEMPRE QE TIVER ENTRADA DE DADOS DO TECLADO como float e char

printf("resultado: %s\n\n",s);
}