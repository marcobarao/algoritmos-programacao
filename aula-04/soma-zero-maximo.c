#include <stdio.h>

int main() {
    int maximo = 0, soma = 0, contador = 0;
    
    printf("Digite um numero para realizar o calculo\n");
    scanf("%d", &maximo);
    
    while(contador <= maximo) {
        soma += contador;
        contador += 1;
    }
    
    printf("O resultado eh %d\n", soma);
    
    
    system("pause");
    return 0;
}
