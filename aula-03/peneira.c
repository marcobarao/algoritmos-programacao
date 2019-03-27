#include <stdio.h>

int main() {
    int idade, altura;
    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Digite a sua altura:\n");
    scanf("%d", &altura);
    
    if (idade > 15 && altura > 180) {
       printf("Apto\n");
    } else {
       printf("Nao apto\n");
    }
    
    system("pause");
}
