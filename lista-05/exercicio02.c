#include <stdio.h>

int main() {
    int numero = 0, soma = 0;

    while (numero >= 0) {
        printf("Digite o inteiro para a realizacao da soma (-1 para sair do loop)\n");
        scanf("%d", &numero);
        
        if (numero >= 0) {
            soma += numero;
        }
    }

    printf("O resultado dessa soma eh: %d\n", soma);

    system("pause");
    return 0;
}
