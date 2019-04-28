#include <stdio.h>

int main() {
    int numero = -1, linha = 1, coluna = 1;

    while(numero < 0) {
        printf("Digite um numero\n");
        scanf("%d", &numero);

        if(numero < 0) {
            printf("Valor invalido, digite apenas numero inteiro nao-negativo\n");
        }
    }
    
    for (linha; linha <= numero; linha++) {
        for (coluna = 1; coluna <= numero; coluna++) {
            printf("%d ", linha * coluna);
        }

        printf("\n");
    }

    system("pause");
    return 0;
}
