#include <stdio.h>

int main () {
    int a[2], i, resultado = 0;

    for (i = 0; i < 2; i++) {
        printf("Digite um numero inteiro para a%d\n", i);
        scanf("%d", &a[i]);

        resultado += (a[i] * a[i]);
    }

    printf("O quadrado do modulo eh %d\n", resultado);

    system("pause");
    return 0;
}
