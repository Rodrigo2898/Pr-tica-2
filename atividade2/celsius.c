#include <stdio.h>
#include <stdlib.h>

int main()
{
  //uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).
  //temperatura atribuída 33.5°C
  //c = °C, f = °F
  
  float c, f;

  printf("Temperatura em °C: ");
  scanf("%f", &c);

  f = (9/5)*c + 32;
  printf("Temperatura em °F = %.1f\n", f); 
  
 return 0;
}