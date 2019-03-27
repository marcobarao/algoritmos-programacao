#include <stdio.h>

int main() {
    int numero, resto;
    
    printf("Digite um numero:\n");
    scanf("%f", &numero);
    
    resto = numero % 2;
    
    if (resto == 0) {
       printf("O numero eh par\n");
    }
    
    printf("Resto eh %d\n", resto);
    
    system("pause");
}
