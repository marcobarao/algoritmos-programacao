#include <stdio.h>

int main() {
    int dimensao1, dimensao2, perimetro, area;

    printf("Digite a primeira dimensao do retangulo:\n");
    scanf("%d", &dimensao1);

    printf("Digite a segunda dimensao do retangulo:\n");
    scanf("%d", &dimensao2);

    perimetro = 2 * (dimensao1 + dimensao2);
    area = dimensao1 * dimensao2;

    printf("O perimetro do retangulo eh %d e a area eh %d", perimetro, area);

    getchar();
    return 0;
}
