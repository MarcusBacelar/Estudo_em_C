#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
float n1, n2, soma;
printf("\n Digite o valor 1:");
scanf("%f", &n1);

printf("\n Digite o valor 2:");
scanf("%f", &n2);
//soma = n1+n2
printf("\n A soma de %.2f + %.2f = %.2f", n1, n2, n1 + n2);
printf("\n A subtracao de %.2f - %.2f = %.2f", n1, n2, n1 - n2);
printf("\n A multiplicao de %.2f * %.2f = %.2f",n1, n2, n1 * n2);
}
