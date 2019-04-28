#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main () {
    int matriz[3][10], i, j;

    srand(time(NULL));

    for (j = 0; j < 10; j++) {
        matriz[0][j] = 11 + rand() % 40;
        matriz[1][j] = 11 + rand() % 40;
        matriz[2][j] = matriz[0][j] + matriz[1][j];
    }

    for (i = 0; i < 3; i++) {
        if (i < 2) {
            printf("VETOR %d = ", i + 1);
        } else {
            printf("SOMA    = ");
        }

        for (j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    system("pause");
    return 0;
}
