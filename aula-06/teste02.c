#include <stdio.h>

int main() {
    int y[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int somas[4] = {0};
    int i, j;
    float media;
    
    for (i = 0; i < 2; i++) {
        media = 0;
        for (j = 0; j < 4; j++) {
            media += y[i][j] / 4.0;
            somas[j] += y[i][j];
        }
        printf("A media da linha %d eh %.2f\n", i + 1, media);
    }
    
    for (j = 0; j < 4; j++) {
        printf("A soma da coluna %d eh %d\n", j + 1, somas[j]);
    }
    
    system("pause");
    return 0;
}

