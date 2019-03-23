#include <stdio.h>

int main() {
    int numero1, quadrado;

    printf("Digite o numero:\n");
    scanf("%d", &numero1);

    quadrado = numero1 * numero1;

    printf("O resultado do quadrado eh: %d", quadrado);

    getchar();
    return 0;
}
