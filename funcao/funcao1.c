#include<stdio.h>//saber qual é o maior valor!!!!

float maior (float num1, float num2){       //funcao
    if(num1 > num2)  // se num1 for maior q num 2
        return num1;    //retorna num 1                
    else
        return num2; // se num2 for maior q num1, retorna num2
}

int main (){

    float x, y, m;

    printf("insira um valor: \n");
    scanf("%f",&x);
    printf("insira mais um valor: \n");
    scanf("%f",&y);

    m = maior(x,y); //x vai pra num1, y vai pra num2

    printf("maior: %.2f",m);


}