#include <stdio.h>

int main() {
    int numero;

    printf("Digite a numero para inverter:\n");
    scanf("%d", &numero);

    printf("O inverso do numero eh: %d", (-numero));

    getchar();
    return 0;
}
