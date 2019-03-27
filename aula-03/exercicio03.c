#include <stdio.h>

int main() {
    int valor;
    
    printf("Digite um valor inteiro\n");
    scanf("%d", &valor);
    
    if (valor % 4 == 0) {
       printf("Eh multiplo de 4\n");
    } else {
       printf("Nao eh multiplo de 4\n");
    }
    
    system("pause");
}
