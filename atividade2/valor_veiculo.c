#include <stdio.h>
#include <stdlib.h>

int main()
{
  //valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).
 //ano de depreciação = ad, ano de fabricação = af, valor de compra = vc, depreciação = d 
 //ad = 2016, af = 2013, vc = 30000

 float vc, af, ad, d; 

 printf("Valor de compra: ");
 scanf("%f", &vc);

 printf("Ano de fabricação: ");
 scanf("%f", &af);

 printf("Ano de depreciação: ");
 scanf("%f", &ad);

 d = (ad + af) * 0.01 * vc;
 printf("Valor depreciado = %.2f\n", d);
 
  return 0;
}