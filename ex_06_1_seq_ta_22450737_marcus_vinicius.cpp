#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14159

void main(void)
{
float raio, area;
printf("\n Digite o valor da area do circulo:");
scanf("%f", &raio);

area = PI * raio * raio;

printf("A area do circulo e: %.2f\n", area);

}
