#include <stdio.h>

int main() {
    int x, y;
    
    printf("Digite o valor para x\n");
    scanf("%d", &x);
    
    printf("Digite o valor para y\n");
    scanf("%d", &y);
    
    if (x <= y) {
      x = x + y;
    } else {
      y = x - y;
    }
    
    printf("X = %d; Y = %d\n", x, y);
    
    system("pause");
}
