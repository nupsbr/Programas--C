#include<stdio.h>  //funcao com vetores!!!!  EXISTE 3 TIPOS DE SINTAX 

void imprime1(int v[], int n){ //imprimindo o vetor
    int i;
    for(i=0;i<n;i++){
        printf("%d",v[i]);
    }
}

void imprime2(int v[5]){ //vetor do tamanho 5
    int i;
    for(i=0;i<5;i++){
        printf("%d",v[i]);
    }
}

void imprime3(int *v, int n){ //o mesmo do imprime1
    int i;
    for(i=0;i<n;i++){
        printf("%d",v[i]);
    }
}


int main (){
    int vet[5]={1,2,3,4,5};

    puts("primeiro imprime:");
    imprime1(vet, 5);// da o tamanho do vet pro imprime 1

    puts("\n segundo imprime:");
    imprime2(vet); // nao precisa dar o tamanho do vet pq ja tem no imprime2

    puts("\nterceiro imprime:");
    imprime3(vet, 5);


}
