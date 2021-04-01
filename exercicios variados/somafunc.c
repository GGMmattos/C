#include<stdio.h>

float soma(float n1, float n2)
 {
   return n1+n2;
 }

void main(void)
 {
  float numero1, numero2;

  printf("Digite o valor de n1: ");
  scanf("%f",&numero1);
  printf("Digite o valor de n2: ");
  scanf("%f",&numero2);
  printf("\n Valor da soma de n1 e n2: %.2f \n\n",soma(numero1,numero2));


 }
