/*Jeremias tem um cronômetro que consegue marcar o tempo em segundos,
Sabendo disso, desenvolva um algoritrno que receba o tempo cronometrado, em
segundos. e diga quantas horas, minutos e segundos se passaram a partir do tempo cronometrado. */

#include <stdio.h>

int main()
{
    int temp, hrs, mins;

    printf("Digite o tempo cronometrado: ");
    scanf("%d", &temp);

    hrs = temp / 3600;
    temp = temp - (3600* hrs);

    mins = temp / 60;
    temp = temp - (60 * mins);

    printf("horas: %d\n", hrs);
    printf("min: %d\n", mins);
    printf("seg: %d\n", temp);

    return 0;
}
