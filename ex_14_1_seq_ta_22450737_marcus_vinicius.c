#include <locale.h>
#include <stdio.h>

int main(){

	float num1, num2, num3, total;
	
	printf("coloque o valor do primeiro numero:");
	scanf("%f", &num1);
	
	printf("coloque o valor do segundo numero:");
	scanf("%f", &num2);
	
	printf("coloque o valor do terceiro numero:");
	scanf("%f", &num3);
	
	total = (num1 + num2 + num3) / 3;
	
	printf("A media aritimetica dos valores e:%.2f", total);
}

