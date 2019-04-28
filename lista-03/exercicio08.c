#include <stdio.h>

int main() {
    int numero1, numero2, numero3, aux;

    printf("Digite um numero inteiro\n");
    scanf("%d", &numero1);

    printf("Digite outro numero inteiro\n");
    scanf("%d", &numero2);

    printf("Digite outro numero inteiro\n");
    scanf("%d", &numero3);

    if (numero1 < numero2) {
        aux = numero1;
        numero1 = numero2;
        numero2 = aux;
    }

    if (numero1 < numero3) {
        aux = numero1;
        numero1 = numero3;
        numero3 = aux;
    }

    if (numero2 < numero3) {
        aux = numero2;
        numero2 = numero3;
        numero3 = aux;
    }

    printf("Os valores ordenados de forma crescente eh: %d, %d e %d", numero3, numero2, numero1);

    return 0;
}