#include <stdio.h>

int main() {
    int numero1, numero2, quociente, resto;

    printf("Digite o primeiro numero\n");
    scanf("%d", &numero1);

    printf("Digite o segundo numero\n");
    scanf("%d", &numero2);

    if (numero2 == 0) {
        printf("ENTRADA INVALIDA");
    } else {
        quociente = numero1 / numero2;
        resto = numero1 % numero2;
        printf("O quociente desses numeros eh %d e o resto eh %d", quociente, resto);
    }

    return 0;
}