#include <stdio.h>

int isEven(int number) {
    return number % 2;
}

int main() {
    int number;
    
    printf("Digite um numero para verificarmos se eh par ou impar\n");
    scanf("%d", &number);
    
    if (isEven(number) == 0) {
       printf("O valor digitado eh par\n");
    } else {
       printf("O valor digitado eh impar\n");
    }
    
    system("pause");
    return 0;
}
