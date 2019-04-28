#include <stdio.h>
#include <limits.h>

int main() {
    int iterator = 0, maior = INT_MIN, numero;

    while(iterator < 5) {
        printf("Digite o %d para descobrirmos o maior\n", iterator + 1);
        scanf("%d", &numero);

        if(numero > maior) {
            maior = numero;
        }

        iterator += 1;
    }

    printf("O maior numero digitado foi %d\n", maior);

    system("pause");
    return 0;
}
