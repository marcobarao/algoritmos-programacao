#include <stdio.h>

int main() {
    int i = 0, resultado[6], quantidade = 15;
    
    printf("Digite a quantidade de lancamentos que voce deseja testar\n");
    scanf("%d", &quantidade);
    
    int dados[quantidade];
    
    for(i = 0; i < quantidade; i++) {
          dados[i] = 1 + rand() % 6;
    }
    
    for(i = quantidade; i >= 0; i--) {
          resultado[dados[i] - 1]++;
    }
    
    for (i = 0; i < 6; i++) {
        printf("O numero %d caiu %d vezes\n", i + 1, resultado[i]);
    }
    
    system("pause");
    return 0;
}
