#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14159

void main(void){
	float raio, altura, area_lateral;
	
	printf("Digite o valor do raio:");
	scanf("%f", &raio);
	
	printf("Digite o valor da altura:");
	scanf("%f", &altura);
	
	area_lateral = 2 * PI * raio *  altura;
	
	printf("O valor da area lateral e: %.2f\n", area_lateral);
}
