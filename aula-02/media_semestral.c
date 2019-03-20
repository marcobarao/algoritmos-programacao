#include <stdio.h>

int main() {
    float numero1, numero2, media;
    // Comentário    
    printf("Digite a nota referente a primeira prova\n");
    scanf("%f", &numero1);
    
    printf("Digite a nota referente a segunda prova\n");
    scanf("%f", &numero2);
    
    media = (numero1 + numero2) / 2;
    
    printf("A média semetral do aluno eh: %.2f\n", media);
    
    system("pause");
    
    return 0;
}
