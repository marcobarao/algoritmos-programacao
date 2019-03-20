#include <stdio.h>

int main() {
    int valor;
    
    printf("Digite um valor de três digitos\n");
    scanf("%d", &valor);
    
    printf("Valor armazenado na dezena eh: ", (valor % 100) / 10);
    
    system("pause");
    return 0;
}
