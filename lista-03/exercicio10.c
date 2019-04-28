#include <stdio.h>

int main() {
    float salario, inss;

    printf("Digite o seu salario mensal\n");
    scanf("%f", &salario);

    if (salario <= 1693.72) {
        inss = salario * 0.08;
    } else if (salario <= 2822.9) {
        inss = salario * 0.09;
    } else {
        inss = salario * 0.11;
    }
    printf("O desconto do inss eh de R$ %.2f", inss);
    

    return 0;
}