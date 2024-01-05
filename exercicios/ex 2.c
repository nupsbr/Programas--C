//(Adaptado AEENCIO e CAMPOS. 2") programa que receba três notas.
// calcule e mostre a media arrtrnetica entre
#include <stdio.h>
int main()
{
    float n1, media, m = 0;

    for (int i = 0; i < 3; i++)
    {
        m = n1;
        printf("Digite a %d nota: \n", i + 1);
        scanf("%f", &n1);
    }

    media = m + m + m;

    printf("media: %2.f", media / 3);

return 0;
}