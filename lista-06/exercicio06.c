#include <stdio.h>

int main () {
    int n, i = 0;
    float nota, peso, media = 0, divisor = 0, dividendo = 0;

    printf("Digite a quantidade de notas\n");
    scanf("%d", &n);
    
    while (i < n && (nota >= 0 && peso >= 0)) {
        printf("Digite a %d nota\n", i + 1);
        scanf("%f", &nota);

        printf("Digite o peso referente a %d nota\n", i + 1);
        scanf("%f", &peso);

        if (nota >= 0 && peso >= 0) {
            dividendo += (nota * peso);
            divisor += peso;
        }

        i++;
    }

    media = dividendo / divisor;

    printf("A media ponderada eh %.2f\n", media);

    system("pause");
    return 0;
}
