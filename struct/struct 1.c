#include <stdio.h>
#include <string.h> //trabalhar com dados tipo STRING
#include <locale.h> //o programa reconheça reconheça ´ ç da lingua pt

#define TAM 50 //definir constante q vale 50

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[TAM]; //<-- vetor d char q vale 50
};

typedef struct tipo_pessoa tipo_pessoa; //aqui renomeia de: (struct tipo_pessoa) para apenas (tipo_pessoa)


int main (){
    setlocale(LC_ALL,"Portuguese"); //qnd inclue o (#include <locale.h>) TEM Q FAZER ISSO <---

    //CRIANDO E INICIALIZANDO

    tipo_pessoa pes = {0, 0.0, "Teste"}; //(pes) é uma variavel | 0 para "idade" | 0.0 para "peso" | "teste" para texto/nome

    printf("Início: \n");
    printf("pes.idade: %d\n",pes.idade);
    printf("pes.peso: %.2f\n",pes.peso);
    printf("pes.nome: %s\n",pes.nome);

    //Atribuindo valores aos campos

    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "texto"); //nao da pra usar o = pq é uma string

    printf("\nALTERANDO OS CAMPOS DE VIA CODIGO:\n");
    printf("pes.idade: %d\n",pes.idade);
    printf("pes.peso: %.2f\n",pes.peso);
    printf("pes.nome: %s\n",pes.nome);

    //Solicitando inseções via teclado

    printf("\nInsira um numero inteiro: \n");
    scanf("%d",&pes.idade);
    printf("\nInsira um numero real: \n");
    scanf("%f",&pes.peso);
    fflush(stdin);
    printf("\nInsira uma palavra: \n");
    scanf("%s",&pes.nome);

    printf("\nALTERANDO COM DADOS DO USUARIO: \n");
    printf("pes.idade: %d\n",pes.idade);
    printf("pes.peso: %.2f\n",pes.peso);
    printf("pes.nome: %s\n",pes.nome);
}