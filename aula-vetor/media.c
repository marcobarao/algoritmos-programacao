#include <stdio.h>

int main() {
    float notas[10], media = 0;
    int i;
    
    for (i = 0; i < 10; i++) {
        printf("Digite a %d nota\n", i + 1);
        scanf("%f", &notas[i]);
        
        media += notas[i] / 10;
    }
    
    printf("A media eh: %.2f\n", media);
    
    for (i = 0; i < 10; i++) {
        if (notas[i] > media) {
           printf("%.2f\n", notas[i]);
        }
    }
    
    system("pause");
    return 0;
}
