#include <stdio.h>

int main() {
    int numero, resultado;

    printf("Digite o numero:\n");
    scanf("%d", &numero);

    resultado = -(numero % 2 - 1);

    printf("O resultado eh: %d", resultado);

    getchar();
    return 0;
}
