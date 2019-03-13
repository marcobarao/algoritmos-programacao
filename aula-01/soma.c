#include <stdio.h>

int main()
{
    // Declaro as variáveis que o programa utilizará
    int numero1, numero2, soma;

    printf("Digite um valor:\n");
    scanf("%d", &numero1);

    
    printf("Digite outro valor:\n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    printf("O resultado da soma de %d e %d eh: %d", numero1, numero2, soma);

    return 0;
}
