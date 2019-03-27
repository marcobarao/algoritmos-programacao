#include <stdio.h>

int main() {
    float total, desconto;
    
    printf("Digite o total da compra\n");
    scanf("%f", &total);
    
    if (total >= 200) {
       desconto = total * 0.2;
    } else {
       desconto = total * 0.15;
    }
    
    printf("O total da compra eh R$ %f e o desconto eh R$ %f\n", total, desconto);
    
    system("pause");
}
