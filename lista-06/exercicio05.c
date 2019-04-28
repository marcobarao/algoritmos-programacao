#include <stdio.h>
#include <math.h>

int main () {
    int total, i = 0;
    double numeros[100], numero, media = 0, varianca = 0;

    while (i < 100 && numero >= 0) {
        printf("Digite uma sequencia de numeros nao-negativos (digite um numero negativo para sair)\n");
        scanf("%lf", &numero);

        if (numero >= 0) {
            numeros[i] = numero;
            i++;
        }
    }

    total = i;

    while (i > 0) {
        i--;
        media += (numeros[i] / total);
    }
    
    printf("MEDIA = %.2lf\n", media);

    while (i < total) {
        varianca += pow(numeros[i] - media, 2);
        i++;
    }

    printf("VARIANCA = %.2lf\n", varianca);

    system("pause");
    return 0;
}
