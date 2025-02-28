#include <stdlib.h>
#include <locale.h>
#define PI 3.14159

void main(void){
	float raio,volume;
	
	printf("Digite o valor do raio da esfera:");
	scanf("%f", &raio);
	
	volume = (4 / 3) * PI * raio * raio;
	
	printf("o valor da esfera e: %.2f", volume);
	
}

