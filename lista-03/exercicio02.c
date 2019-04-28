#include <stdio.h>

int main() {
    int numero1, numero2, aux;
    
    printf("Digite o primeiro numero\n");
    scanf("%d", &numero1);

    printf("Digite o segundo numero\n");
    scanf("%d", &numero2);

    if (numero1 < numero2) {
        aux = numero2;
        numero2 = numero1;
        numero1 = aux;
    }

    printf("Os valores ordenados de forma crescente eh: %d e %d", numero2, numero1);
    return 0;
}