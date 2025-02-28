#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
float b, h, total;
printf("\n Digite o valor da base do triangulo:");
scanf("%f", &b);

printf("\n Digite o valor da altura do triangulo:");
scanf("%f", &h);

total = (b * h) / 2;

    printf("A área do triangulo e: %.2f\n", total);

}
