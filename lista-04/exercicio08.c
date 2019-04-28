#include <stdio.h>

int main() {
    int a = -1, b = -1, potencia = 1;
    
    while(a < 0) {
        printf("Digite a base da potencia\n");
        scanf("%d", &a);

        if(a < 0) {
            printf("Valor invalido, digite apenas numero inteiro nao-negativo\n");
        }
    }

    while(b < 0) {
        printf("Digite o expoente da potencia\n");
        scanf("%d", &b);

        if(b < 0) {
            printf("Valor invalido, digite apenas numero inteiro nao-negativo\n");
        }
    }

    while(b > 0) {
        potencia = potencia * a;

        b -= 1;
    }

    printf("O resultado da potencia eh %d\n", potencia);

    system("pause");
    return 0;
}
