#include <stdio.h>

int main() {
    int contador = 0, soma = 0;

    while(contador <= 10) {
        soma += contador;
        contador += 1;
    }
    
    printf("A soma entre 0 e 10 eh %d\n", soma);
    
    system("pause");
    return 0;
}
