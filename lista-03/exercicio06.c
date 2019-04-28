#include <stdio.h>

int main() {
    int inteiro;

    printf("Digite um inteiro\n");
    scanf("%d", &inteiro);

    if (inteiro < 18) {
        printf("JOVEM");
    } else if (inteiro < 60) {
        printf("ADULTO");
    } else {
        printf("IDOSO");
    }

    return 0;
}