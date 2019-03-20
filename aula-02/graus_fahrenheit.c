#include <stdio.h>

int main() {
    float graus, fahrenheit;
    // Comentário    
    printf("Digite a temperatura em graus celsius\n");
    scanf("%f", &graus);
    
    fahrenheit = 9 * graus / 5 + 32;
    
    printf("A temperatura em graus fahrenheit eh: %.2f\n", fahrenheit);
    
    system("pause");
    
    return 0;
}
