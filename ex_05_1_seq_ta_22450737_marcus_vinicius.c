#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
float f, c;
printf("\n Digite a temperatura em Fahrenheit:");
scanf("%f", &f);


c = (f - 32) / 1.8;

printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", f, c);
    

}
