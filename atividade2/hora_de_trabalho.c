#include <stdio.h>
#include <stdlib.h>

int main()
{
  //valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.
  //ht = hora de trabalho, th = total de horas no mês, sb = salário bruto, sl = salário líquido, id = impostos descontados, descontados do salário bruto = dsb
  //th = 160, ht = 20
  //5 dias na semana, 4 semanas no mês 

  float ht, th, sb, sl, id, dsb;

  printf("Valor da hora de trabalho: ");
  scanf("%f", &ht); 

  printf("Total de horas trabalhadas no mês: ");
  scanf("%f", &th); 

  sb = ht * th * 5 * 4;
  printf("Salário Bruto = %.2f\n", sb);

  dsb = sb * 0.11;
  printf("Descontados do salário bruto = %2.f\n", dsb);

  id = sb * 0.25;
  printf("Impostos descontados = %.2f\n", sb);

  sl = sb - id - dsb; 
  printf("Salário líquido = %.2f\n", sl); 

  
  return 0;
}