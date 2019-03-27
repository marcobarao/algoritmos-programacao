#include <stdio.h>

int main() {
    int val1, val2, soma;
    
    printf("Digite o primeiro valor\n");
    scanf("%d", &val1);
    
    printf("Digite o segundo valor\n");
    scanf("%d", &val2);
    
    soma = val1 + val2;
    
    if (val1 != val2) {
       printf("O resultado eh %d\n", soma);
    } else {
       printf("Sem resultado pra voce\n");
    }
    
    system("pause");
}
