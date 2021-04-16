#include <stdio.h>
#include <stdlib.h>

int main()
{
  //largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).
  //l = largura, c = comprimento,a = área, ah = área em hectares
  // l = 30.5, c = 53.4 

  float l, c, a, ah;

  printf("Largura do terreno em metros: ");
  scanf("%f", &l);

  printf("Comprimento do terreno em metros: ");
  scanf("%f", &c);
  
  a = l * c; 
  printf("Área do terreno = %.2f\n", a);

  ah = a * 10000;
  printf("Área em hectares = %.2f\n", ah); 


  return 0;
}