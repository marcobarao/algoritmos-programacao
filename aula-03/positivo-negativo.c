#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero:\n");
    scanf("%f", &numero);
    
    if (numero >= 0) {
       printf("O numero eh positivo\n");
    } else {
       printf("O numero eh negativo\n");
    }
    
    system("pause");
}
