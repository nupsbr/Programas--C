#include <stdio.h>
int main (){

char s[10];

printf("Digite algo (leitura pelo gets):\n");
gets(s); //nao limita qnt do vetor
fflush(stdin);

puts("resultado:");
puts(s);
puts("");


printf("Digite algo (leitura pelo fgets):\n");
fgets(s, 10, stdin);// limita qnt do vetor
fflush(stdin);

puts("resultado:");
puts(s);

}