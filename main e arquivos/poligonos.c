#include "poligonos.h" //chamando as variaveis do .h para fazer as contas

float calcPerimetroTriangulo (float a, float b, float c){

    return a + b + c;
}

float calcPerimetroRetangulo(float a, float b){

    return 2*b + 2*a;
}

float calcPerimetroCirculo(float r){

    return 2 * PI * r;
}

float calcAreaTriangulo(float b, float a){

    return (b*a)/2;
}

float calcAreaRetangulo (float b, float a){

    return b*a;
}
float calcAreaCirculo (float r ){

    return 2*PI*r*r;
}