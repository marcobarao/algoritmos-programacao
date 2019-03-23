#include <stdio.h>

int main() {
    int numero1, numero2, porcentagem;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &numero1);

    printf("Digite o segundo numero:\n");
    scanf("%d", &numero2);

    porcentagem = numero1 * 100 / numero2;

    printf("A porcentagem do segundo pelo primeiro numero eh: %d%%", porcentagem);

    getchar();
    return 0;
}
