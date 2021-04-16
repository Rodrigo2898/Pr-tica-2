#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//leia um número inteiro e imprima a tabuada de multiplicação
//número inteiro utilizado = 8 

int main()
{
  int tabuada = 0; 
  printf("Digite o numero que você deseja: ");
  scanf("%i", &tabuada);

  for(int x = 1; x<=10; ++x)
  {

    printf("%ix%i = %i\n", x, tabuada, tabuada * x); 
  }

  return 0; 
}