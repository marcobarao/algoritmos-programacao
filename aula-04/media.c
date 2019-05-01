#include <stdio.h>

int main() {
    int prova, aluno = 0;
    float nota, media;
    
    while(aluno < 2) {
        prova = 0;
        media = 0;

        while(prova < 2) {
            printf("Digite a nota referente a prova %d do aluno %d\n", prova + 1, aluno + 1);
            scanf("%f", &nota);
        
            media += nota;
        
            prova += 1;
        }
        media = media / prova;
        printf("A media do aluno %d eh %f\n", aluno + 1, media);
        
        aluno += 1;
    }
    
    
    system("pause");
    return 0;
}
