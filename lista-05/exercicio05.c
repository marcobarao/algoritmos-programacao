#include <stdio.h>

int main() {
    int numero = 0, iterator = 2;

    while(numero < 2) {
        printf("Digite um valor maior ou igual a 2 para fatorarmos\n");
        scanf("%d", &numero);

        if(numero < 2) {
            printf("Valor invalido, digite apenas numero inteiro maior ou igual a 2\n");
        }
    }

    while (numero > 1) {
        for (iterator; iterator <= numero; iterator++) {
            if (numero % iterator == 0) {
                numero /= iterator;
                printf("%d", iterator);

                if (numero != 1) {
                    printf(".");
                } else {
                    printf("\n");
                }

                break;
            }
        }
    }

    system("pause");
    return 0;
}
