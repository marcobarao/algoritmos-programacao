#include <stdio.h>

int main () {
    int numeros[100], numero, i = 0;

    while (i < 100 && numero >= 0) {
        printf("Digite uma sequencia de numeros inteiros nao-negativos (digite um numero negativo para sair)\n");
        scanf("%d", &numero);

        if (numero >= 0) {
            numeros[i] = numero;
            i++;
        }
    }

    while(i > 0) {
        i--;
        printf("%d\n", numeros[i]);
    }

    system("pause");
    return 0;
}
