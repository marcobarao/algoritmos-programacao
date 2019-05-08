#include <stdio.h>

void showIToN(int i, int f) {
     for (i; i <= f; i++) {
         printf("%d\n", i);
     }
}

int main() {
    int i, f;
    
    printf("Digite o valor inicial\n");
    scanf("%d", &i);
    
    printf("Digite o valor final\n");
    scanf("%d", &f);
    
    showIToN(i, f);
    
    system("pause");
    return 0;
}
