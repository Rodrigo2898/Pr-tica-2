#include <stdio.h>
#include <stdlib.h>

int main()
{
  //dois números inteiros e imprima o quociente e o resto da divisão entre eles.
  //num1 = 70, num2 = 50 
  
  int num1, num2;
  int quociente, resto;

  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  
  printf("Digite o segundo número: ");
  scanf("%d", &num2);

  quociente = num1 / num2; 
  printf("Quociente da divisão = %d\n", quociente); 

  resto = num1 % num2;
  printf("Resto da divisão = %d\n", resto);


  return 0;
}