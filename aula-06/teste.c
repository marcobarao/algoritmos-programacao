#include <stdio.h>

int main() {
    int y[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int i, j;
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", y[i][j]);
        }
        printf("\n");
    }
    
    system("pause");
    return 0;
}
