#include <stdio.h>

int main() {
    int divisores = 0, n = 0, divisor = 0;

    while(n < 2) {
        printf("Digite um numero para verificarmos se eh um numero primo\n");
        scanf("%d", &n);

        if(n < 2) {
            printf("Valor invalido, digite apenas numero inteiro maior ou igual a 2\n");
        }
    }

    divisor = n / 2;

    while(divisor > 1) {
        if (n % divisor == 0) {
            divisores += 1;
        }

        divisor -= 1;
    }

    if(divisores > 0) {
        printf("O %d nao eh um numero primo\n", n);        
    } else {
        printf("O %d eh um numero primo\n", n);
    }

    system("pause");
    return 0;
}
