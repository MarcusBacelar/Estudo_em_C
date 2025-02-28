#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
float b, h, total;
printf("\n Digite o valor da primeira nota:");
scanf("%f", &b);

printf("\n Digite o valor da segunda nota:");
scanf("%f", &h);

total = (b + h) / 2;

    printf("A media e: %.2f\n", total);

}
