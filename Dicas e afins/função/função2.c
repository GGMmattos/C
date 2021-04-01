#include<stdio.h>

float area(float h, float b)
 {
   return h*b;
 }

void main(void)
 {
  float altura1, altura2, base1, base2;

  printf("Digite o valor da altura do primeiro retangulo: ");
  scanf("%f",&altura1);
  printf("Digite o valor da base do primeiro retangulo: ");
  scanf("%f",&base1);
  printf("\n Valor da area do primeiro retangulo: %.2f \n\n",area(altura1,base1));

  printf("Digite o valor da altura do segundo retangulo: ");
  scanf("%f",&altura2);
  printf("Digite o valor da base do segundo retangulo: ");
  scanf("%f",&base2);
  printf("\n Valor da area do segundo retangulo: %.2f \n\n",area(altura2,base2));
 }
