#include <stdio.h>

int main() {
    int iterator = 0, soma = 0, notas = -1, nota, abaixoDe5 = 0;
    float media = 0;

    while(notas < 0) {
        printf("Digite a quantidade de notas que voce deseja registrar\n");
        scanf("%d", &notas);

        if(notas < 0) {
            printf("Valor invalido, digite um numero inteiro nao-negativo\n");
        }
    }

    while(iterator < notas) {
        while(nota < 0 || nota > 10) {
            printf("Digite o valor da %d nota\n", iterator + 1);
            scanf("%d", &nota);

            if(nota < 0 || nota > 10) {
                printf("Valor invalido, digite uma nota de 0 a 10\n");
            } else if(nota < 5) {
                abaixoDe5 += 1;
            }
        }
        soma += nota;
        iterator += 1;
        nota = -1;
    }

    media = soma / notas;
    
    printf("Quantidade de notas = %d\n", notas);
    printf("Media das notas = %.1f\n", media);
    printf("Quantidade de notas menor que 5 = %d\n", abaixoDe5);

    system("pause");
    return 0;
}
