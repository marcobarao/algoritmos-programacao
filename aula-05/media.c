#include <stdio.h>

void main()
{
     int cont;
     float p1 = 0, p2 = 0, media = 0;
     
     for(cont = 1; cont <= 10; cont += 1)
     {
              printf("Digite a primeira nota\n");
              scanf("%f", &p1);
              printf("Digite a primeira nota\n");
              scanf("%f", &p2);

              media = (p1 + p2) / 2;
              printf("%.2f\n", media);
     }
     
     system("pause");
}
