#include <stdio.h>

float circunferencia(float raio)
{
      return 2 * 3.14 * raio;
}

int main()
{
    float circ;
    circ = circunferencia(1.0);
    
    printf("O resultado da circunferencia eh: %.2f\n", circ);
    
    system("pause");
    return 0;
}
