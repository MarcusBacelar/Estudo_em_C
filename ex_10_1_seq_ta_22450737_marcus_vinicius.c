#include <locale.h>
#include <conio.h>
#include <stdio.h>

void main(void){
	float a, b, raiz;
	
	printf("coloque o valor de a:");
	scanf("%f", &a);
	
	printf("coloque o valor de b:");
	scanf("%f", &b);
	
	raiz = - b/a;
	
	printf("Valor da equacao é: %.2f", raiz);


}

