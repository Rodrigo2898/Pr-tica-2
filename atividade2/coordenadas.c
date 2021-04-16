#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  // leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).
 // x1 = 10 , y1 = -5, x2 = -8, y2 = 15 


 float x1, y1, x2, y2, d, v;
 
 printf("Valor das coordenadas (x1,y1): ");
 scanf("%f %f", &x1, &y1);

 printf("Valor das coordenadas (x2,y2): ");
 scanf("%f %f", &x2, &y2);
 
 v = (x2-x1) * (x2-x1) + (y2-y1) * (y2-y1); //v = valor da expressão 
 printf("Valor da expressão = %.2f\n", v);
 //valor de v = 724

 d = sqrt(724);
 printf("Distância = %.2f\n", d);
 


  return 0;
}