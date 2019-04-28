#include <stdio.h>

int main() {
    float renda, imposto;

    printf("Digite a sua renda anual\n");
    scanf("%f", &renda);

    if (renda <= 22847.66) {
        printf("Isento");
    } else {
        if (renda <= 33919.8) {
            imposto = renda * 0.075;
        } else if (renda <= 45012.6) {
            imposto = renda * 0.15;
        } else if (renda <= 55976.16) {
            imposto = renda * 0.225;
        } else {
            imposto = renda * 0.275;
        }
        printf("O desconto do imposto de renda eh de R$ %.2f", imposto);
    }
    

    return 0;
}