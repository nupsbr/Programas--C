#include <stdio.h> //prototipo d funcao PARA CASO TENHA VARIAS FUNCOES

float maior (float num1, float num2);// mostra pra qual funcao deve ir/ sem isso o programa nao sabe pra onde ir


int main (){
    float x, y, m;

    printf("insira um valor: \n");
    scanf("%f", &x);
    printf("insira mais um valor: \n");
    scanf("%f",&y);

    m = maior(x,y);

    printf("maior: %.2f",m);


}

float maior (float num1, float num2){// vem pra essa funcao
    if(num1 > num2)
        return num1;
        else
        return num2;
}
