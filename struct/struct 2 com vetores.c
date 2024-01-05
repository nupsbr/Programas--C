#include <stdio.h>
#include <string.h> //trabalhar com dados tipo STRING
#include <locale.h> //o programa reconheça reconheça ´ ç da lingua pt
#include <stdlib.h>

#define TAM 3

struct  tipo_pessoa
{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa; //renomeia para tipo pessoa

int main(){

    setlocale(LC_ALL,"Portuguese");

    tipo_pessoa lista[TAM]; //crio uma "lista" de tamanho 3 | 3 listas
    int i;

    for ( i = 0; i < TAM; i++)
    {
        printf("Insira os dados (%d):\n", i+1);
        puts("Nome: ");
        scanf("%50[^\n]s",&lista[i].nome); // ([^\n])o scanf vai ler ate os ESPAÇOS até 50 caracteres
        fflush(stdin);
    
        puts("Idade: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        puts("Peso");
        scanf("%f",&lista[i].peso);
        fflush(stdin);

    }
    
system("cls"); //vai limpar tudo q foi escrito

    puts("Seus dados:\n");
    for ( i = 0; i < TAM; i++)
    {
        printf("------------------Pessoa %d------------------\n", i+1);
        printf("\tNome:%s\n",lista[i].nome);
        printf("\tidade:%d\n",lista[i].idade);
        printf("\tNome:%.2f\n",lista[i].peso);

    }
    
    printf("--------------------------------------------");

}
