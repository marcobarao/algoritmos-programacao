#include <stdio.h>
#include <limits.h>

int main() {
    int iterator = 0, menor = INT_MAX, numero;

    while(iterator < 5) {
        printf("Digite o %d para descobrirmos o menor\n", iterator + 1);
        scanf("%d", &numero);

        if(numero < menor) {
            menor = numero;
        }

        iterator += 1;
    }

    printf("O menor numero digitado foi %d\n", menor);

    system("pause");
    return 0;
}
