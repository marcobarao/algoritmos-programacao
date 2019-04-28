#include <stdio.h>

int main() {
    int numero = -1, fatorial = 1;

    while(numero < 0){
        printf("Digite um numero para realizarmos o calculo do fatorial\n");
        scanf("%d", &numero);

        if(numero < 0) {
            printf("Valor invalido, digite apenas numero inteiro nao-negativo\n");
        }
    }

    while(numero > 0) {
        fatorial *= numero;
        numero -= 1;
    }

    printf("O resultado do fatorial eh %d\n", fatorial);

    system("pause");
    return 0;
}
