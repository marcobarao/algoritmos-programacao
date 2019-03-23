#include <stdio.h>

int main() {
    int numero1, numero2, soma;

    printf("Digite o primeiro numero da soma:\n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero da soma:\n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    printf("O resultado da soma eh: %d", soma);

    getchar();
    return 0;
}
