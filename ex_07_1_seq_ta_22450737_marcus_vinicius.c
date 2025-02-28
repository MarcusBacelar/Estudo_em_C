#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14159

void main(void){
	float raio, comprimento;
	
	printf("Valor do raio:");
	scanf("%f", &raio);
	
	comprimento = 2 * PI * raio;
	
	printf("O valor do comprimento e %.2f\n", comprimento);

	
	
}

