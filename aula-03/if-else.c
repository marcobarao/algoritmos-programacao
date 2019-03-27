#include <stdio.h>

int main() {
    float nota;
    
    printf("Digite a nota semestral do aluno:\n");
    scanf("%f", &nota);
    
    if (nota >= 6) {
       printf("Aprovado\n");
    } else {
       printf("Reprovado\n");
    }
    
    system("pause");
}
