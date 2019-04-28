#include <stdio.h>

int main() {
    int numero;

    printf("Digite o numero\n");
    scanf("%d", &numero);

    if(numero % 2 == 0) {
        printf("%d", 0);
    } else {
        printf("%d", 1);
    }

    return 0;
}