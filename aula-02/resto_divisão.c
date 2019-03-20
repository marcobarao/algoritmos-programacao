#include <stdio.h>

int main() {
    int numero1, numero2, resultado;
    // Comentário    
    printf("Digite o primeiro numero inteiro\n");
    scanf("%d", &numero1);
    
    printf("Digite o segundo numero inteiro\n");
    scanf("%d", &numero2);
    
    resultado = numero1 % numero2;
    
    printf("O resto da divisão eh: %d\n", resultado);
    
    system("pause");
}
