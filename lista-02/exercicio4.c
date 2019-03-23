#include <stdio.h>

int main() {
    int numero1, numero2, quociente;

    printf("Digite o primeiro numero do quociente:\n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero do quociente:\n");
    scanf("%d", &numero2);

    quociente = numero1 / numero2;

    printf("O resultado do quociente eh: %d", quociente);

    getchar();
    return 0;
}
