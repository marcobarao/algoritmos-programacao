#include <stdio.h>

int main()
{
    int numero, modulo;

    printf("Digite um valor inteiro\n");
    scanf("%d", &numero);

    modulo = numero;

    if (numero < 0) {
        modulo = -numero;
    }

    printf("O modulo desse inteiro eh %d", modulo);
    return 0;
}
