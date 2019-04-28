#include <stdio.h>

int main() {
    int numero = -1, iterator = 0, charCount = 1, paddingLeft = 0;

    while (numero < 0) {
        printf("Digite um inteiro para fazer o desenho\n");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Digite apenas valores nao-negativos\n");
        }
    }

    for (iterator; iterator <= numero; iterator++) {
        paddingLeft = numero - iterator;
        while(paddingLeft > 0) {
            printf(" ");
            paddingLeft--;
        }
        while(charCount <= iterator) {
            printf("/");
            charCount++;
        }
        printf("|");
        while(charCount > 1) {
            printf("\\");
            charCount--;
        }
        printf("\n");
    }

    system("pause");
    
    return 0;
}
