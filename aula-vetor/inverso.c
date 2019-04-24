#include <stdio.h>

int main() {
    int numeros[5], i;
    
    for (i = 0; i < 5; i++) {
        printf("Digite um numero\n");
        scanf("%d", &numeros[i]);
    }
    
    for (i = 4; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }
    
    system("pause");
    return 0;
}
