#include <locale.h>
#include <conio.h>
#include <stdio.h>


int main() {
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    // Trocando os valores usando XOR
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    printf("Os valores trocados são:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
}
