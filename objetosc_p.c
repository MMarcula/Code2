#include <stdio.h>

void objetosc()
{
    printf("Liczenie objetosci prostopadloscianu\n");
    float a, b, h, v;
    printf("Podaj dugosci bokow: \n");
    printf(">> dlugosc boku a: ");
    scanf("%f", &a);
    printf(">> dlugosc boku a: ");
    scanf("%f", &b);
    printf(">> wysokosc h: ");
    scanf("%f", &h);
    v = a*b*h;
    printf("Objetosc prostopadloscianiu jest rowna %.2f\n", v);
}
