#include <stdio.h>

int main() {
    float p1, p2, media;
    
    printf("Digite a nota da primeira prova\n");
    scanf("%f", &p1);

    printf("Digite a nota da segunda prova\n");
    scanf("%f", &p2);
    
    media = (p1 + p2) / 2;
    
    if (media >= 6) {
       printf("Aprovado\n");
    } else {
       if (media > 4) {
          printf("Exame\n");
       } else {
          printf("Reprovado\n");
       }
    }
    
    system("pause");
}
