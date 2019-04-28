#include <stdio.h>

int main() {
    int numero1, numero2, aritmetica;

    printf("Digite um numero inteiro\n");
    scanf("%d", &numero1);

    printf("Digite outro numero inteiro\n");
    scanf("%d", &numero2);

    if (numero1 > 5 && numero2 > 5) {
        aritmetica = (numero1 + numero2) / 2;
        printf("A media aritmetica eh %d", aritmetica);
    } else {
        if (numero1 > numero2) {
            printf("O menor numero eh %d", numero2);
        } else {
            printf("O menor numero eh %d", numero1);
        }
    }

    return 0;
}