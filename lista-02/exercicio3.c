#include <stdio.h>

int main() {
    int numero1, numero2, produto;

    printf("Digite o primeiro numero do produto:\n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero do produto:\n");
    scanf("%d", &numero2);

    produto = numero1 * numero2;

    printf("O resultado do produto eh: %d", produto);

    getchar();
    return 0;
}
