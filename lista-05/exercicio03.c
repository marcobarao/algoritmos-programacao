#include <stdio.h>

int main() {
    int iterator, divisor = 0, divisores = 0, n = 0;

    while(n < 2) {
        printf("Digite um numero\n");
        scanf("%d", &n);

        if(n < 2) {
            printf("Valor invalido, digite apenas numero inteiro maior ou igual a 2\n");
        }
    }

    for (iterator = 2; iterator <= n; iterator++) {
        divisores = 0;
        divisor = iterator / 2;

        while(divisor > 1) {
            if (iterator % divisor == 0) {
                divisores += 1;
            }

            divisor -= 1;
        }

        if (divisores == 0) {
            printf("%d ", iterator);
        }
    }

    system("pause");
    return 0;
}
