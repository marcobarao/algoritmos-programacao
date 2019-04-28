#include <stdio.h>

int main() {
    int numero;
    printf("Digite um valor inteiro\n");
    scanf("%d", &numero);

    printf("O resultado eh: ");
    if (numero < 0) {
        printf("%d", 0);
    } else if (numero > 10) {
        printf("%d", 10);
    } else {
        printf("%d", numero);
    }
    return 0;
}