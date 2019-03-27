#include <stdio.h>

int main() {
    char sexo;
    float altura, resultado;
    
    printf("Digite seu sexo (f ou m)\n");
    scanf(" %c", &sexo);
    
    printf("Digite sua altura\n");
    scanf("%f", &altura);
    
    if (sexo == 'm') {
       resultado = (72.7 * altura) - 58;
    } else {
       resultado = (62.1 * altura) - 44.7;
    }
    
    printf("O resultado eh: %f\n", resultado);
    
    system("pause");
}
