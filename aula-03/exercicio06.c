#include <stdio.h>

int main() {
    float vendas, salario;
    
    printf("Digite o valor total de vendas feitas pelo usuario\n");
    scanf("%f", &vendas);
    
    if (vendas > 20000) {
       salario = vendas * 0.1;
    } else {
       salario = vendas * 0.075;
    }
    
    printf("O vendedor recebera %f\n", salario);
    
    system("pause");
}
