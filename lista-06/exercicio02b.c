#include <stdio.h>
#include <math.h>

int main () {
    int a[2], b[2], i, resultado = 0;

    for (i = 0; i < 2; i++) {
        printf("Digite o valor inteiro para a%d\n", i);
        scanf("%d", &a[i]);

        printf("Digite o valor inteiro para b%d\n", i);
        scanf("%d", &b[i]);

        resultado += abs(b[i] - a[i]);
    }

    printf("A distancia de Manhattan eh %d\n", resultado);

    system("pause");
    return 0;
}
