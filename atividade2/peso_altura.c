#include <stdio.h>
#include <stdlib.h>

int main()
{
  //peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).
  //p = peso, a = altura
  //p = 88.4, a = 1.84

  float p, a, imc;

  printf("Peso: ");
  scanf("%f", &p); 

  printf("Altura: ");
  scanf("%f", &a);

  imc = p / (a * a);
  printf("Índice de massa corporal = %.2f\n", imc);
   
  return 0;
}