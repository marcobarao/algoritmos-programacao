#include <stdio.h>

int main() {
    int iterator = 1;

    while(iterator <= 1000) {
        if(iterator % 2 == 0) {
            printf("%d\n", iterator);
        }

        iterator += 1;
    }
    

    system("pause");
    return 0;
}
