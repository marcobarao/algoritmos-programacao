#include <stdio.h>

int main() {
    int numero1, numero2, diferenca;

    printf("Digite o primeiro numero da diferenca:\n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero da diferenca:\n");
    scanf("%d", &numero2);

    diferenca = numero1 - numero2;

    printf("O resultado da diferenca eh: %d", diferenca);

    getchar();
    return 0;
}
