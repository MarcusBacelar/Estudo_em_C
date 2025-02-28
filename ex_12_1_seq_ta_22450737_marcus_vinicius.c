#include <locale.h>
#include <conio.h>
#include <stdio.h>

int main() {
    int numero1, numero2, soma, subtracao;

    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o valor do segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;

    printf("O valor da soma e igual a : %d\n", soma);
    printf("O valor da subtracao e igual a : %d\n", subtracao);
    
	}
