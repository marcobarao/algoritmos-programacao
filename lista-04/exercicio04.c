#include <stdio.h>

int main() {
    int iterator = 0, numero = 0, soma = 0;

    while(iterator < 5) {
        printf("Digite o %d numero para realizarmos a soma\n", iterator + 1);
        scanf("%d", &numero);

        soma += numero;
        iterator += 1;
    }

    printf("O resultado da soma eh %d\n", soma);

    system("pause");
    return 0;
}
