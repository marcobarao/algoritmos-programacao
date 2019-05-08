#include <stdio.h>

void show100() {
     int i;
     for (i = 1; i <= 100; i++) {
         printf("%d\n", i);
     }
}

int main() {
    show100();
    
    system("pause");
    return 0;
}
