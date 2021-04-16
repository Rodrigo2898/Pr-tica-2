#include <stdio.h> 
#include <stdlib.h>

int main()
{
  //média aritmética de três números reais 
  //num1 = 40, num2 = 100, num3 = 133 

  float num1, num2, num3, media;

  printf("Digite o primeiro número: ");
  scanf("%f", &num1);
  
  printf("Digite o segundo número: ");
  scanf("%f", &num2);
  
  printf("Digite o terceiro número: ");
  scanf("%f", &num3);
  
  media = (num1 + num2 + num3) / 2;
  printf("Média dos números = %.1f\n", media);
  
  
  return 0;
}