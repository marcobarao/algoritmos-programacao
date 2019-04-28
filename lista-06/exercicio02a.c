#include <stdio.h>
#include <math.h>

int main () {
    int a0, a1, b0, b1, resultado = 0;

    printf("Digite o valor inteiro para a0\n");
    scanf("%d", &a0);

    printf("Digite o valor inteiro para b0\n");
    scanf("%d", &b0);

    printf("Digite o valor inteiro para a1\n");
    scanf("%d", &a1);

    printf("Digite o valor inteiro para b1\n");
    scanf("%d", &b1);

    resultado = abs(b0 - a0) + abs(b1 - a1);

    printf("A distancia de Manhattan eh %d\n", resultado);

    system("pause");
    return 0;
}
