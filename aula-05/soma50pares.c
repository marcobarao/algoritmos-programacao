#include <stdio.h>

void main()
{
     int cont, soma = 0;
     for(cont = 0; cont <= 100; cont += 2)
     {
              soma += cont;
     }
     
     printf("%d", soma);
     
     system("pause");
}
