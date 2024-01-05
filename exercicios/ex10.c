/*(Adaptado de ASCENCIO e CAMPOS. Fasa um programa que mostre os oito
primeiros termos da sequência de FIBONACCI
0-1-1-2-3-5-8-13-21-34-55-...*/

#include <stdio.h>

int main()
{
    int z = 1, x = 0, r;

    printf("=======8 PRIMEIROS NUMEROS=======\n");
    printf("===========FIBONACCI=============\n");
    printf("%d ", x);
    printf("%d ", z);

    for (int i = 3; i <= 8; i++)
    {
        r = z + x;
        printf("%d ", r);
        x = z;
        z = r; // passa os valores em diante
    }

    return 0;
}