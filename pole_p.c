#include <stdio.h>
void pole()
{
    printf("Liczenie pola prostokata \n");
    float a,b,p;
    printf("Podaj dlugosci bokow: \n");
    printf(">> Dlugosc boku a: ");
    scanf("%f", &a);
    printf(">> Dlugosc boku b: ");
    scanf("%f", &b);
    p=a*b;
    printf("Pole prostokata jest rowne %.2f\n", p);
}
