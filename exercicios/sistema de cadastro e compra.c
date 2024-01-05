//interface de cadastro de cliente avon, escolha produtos e mostre o valor da compra
#include <stdio.h>
#include <stdlib.h>

int main(){

system ("color D1"); //cor


char nome;
int idade, sex;

    printf("==========BEM-VINDO(A)==========\n");
    printf("===========LOJAS AVON===========\n\n");

    printf("Informe seu nome: ");
        scanf("%s", &nome);

    printf("Sua idade: ");
        scanf("%d", &idade);

    printf("Seu sexo: \n");
    printf(" 1 para: [MASCULINO]\n");
    printf(" 2 para: [FEMININO]\n");
    printf(" 3 para: [OUTRO]\n");
        scanf("%d", &sex);

    if (sex == 1){
     printf("MASCULINO\n");
        }else if (sex == 2){
         printf("FEMININO\n");
            }else if (sex == 3){
             printf("OUTRO\n");
                } else{
                 printf("Digite o numero de seu sexo novamente\n");
    }

char p; 
float res=0,
      A,
      B,
      C,
      D,
      E;
      
      
    printf(" =============LOJAS AVON============\n");
    printf(" ==============PRODUTOS=============\n");
    printf("|[A]PERFUME FEMININO:  R$10.50      |\n");
    printf("|[B]PERFUME MASCULINO: R$12.15      |\n");
    printf("|[C]CREME PRA PELE:     R$9.98      |\n");
    printf("|[D]BATOM VERMELHO:     R$3.98      |\n");
    printf("|[E]MAQUIAGEM:          R$15.20     |\n");
    printf("====================================\n\n");

         printf("Tecles [S] para finalizar a compra!\n");
    for (;;)
  {
    printf("Digite a LETRA do produto que deseja: ");
    scanf("%s", &p);
    
    if (p == 'A')
    {
      printf("ESCOLHEU A\n");
      A = 10.50;
    }else if (p == 'B')
    {
      printf("ESCOLHEU B\n");
      B = 12.15;
    }else if (p == 'C')
    {
      printf("ESCOLHEU C\n");
      C = 9.98;
    }else if (p == 'D')
    {
      printf("ESCOLHEU D\n");
      D = 3.98;
    }else if (p == 'D')
    {
      printf("ESCOLHEU E\n");
      E = 15.20;
    }else{
      printf("digite em MAIUSCULO a letra do produto!\n");
    }
    

    if (p == 'S')
    {
      printf("Finalizando Compra...\n");
      break; //força a saída do loop
    }
    
    res = A + B + C + D + E;
    
   
  }
  printf("RESULTADO: %.2f\n",res);





return 0;
}