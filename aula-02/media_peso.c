#include <stdio.h>

int main() {
    float prova1, prova2, prova3, media;
    
    printf("Digite a nota da primeira prova\n");
    scanf("%f", &prova1);
    
    printf("Digite a nota da segunda prova\n");
    scanf("%f", &prova2);
    
    printf("Digite a nota da terceira prova\n");
    scanf("%f", &prova3);
    
    media = (prova1 * 2 + prova2 * 5 + prova3 * 3) / 10;
    
    printf("A media semestral do aluno eh: %.2f\n", media);
    
    system("pause");
    return 0;
}
