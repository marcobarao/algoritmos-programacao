#include <stdio.h>

int main () {
    int a0, a1, i, resultado = 0;

    printf("Digite um numero inteiro\n");
    scanf("%d", &a0);

    printf("Digite outro numero inteiro\n");
    scanf("%d", &a1);

    resultado = a0 * a0 + a1 * a1;

    printf("O quadrado do modulo eh %d\n", resultado);

    system("pause");
    return 0;
}
