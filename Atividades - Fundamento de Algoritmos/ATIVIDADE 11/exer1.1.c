#include <stdio.h>

float soma(float n1,float n2)
{
  float soma=0;
  soma=n1+n2;

return soma;

}

void main(void)
{
    float numero1, numero2;
    printf("Digite um numero > ");
    scanf("%f",&numero1);

    printf("\nDigite outro numero > ");
    scanf("%f",&numero2);

    printf("\n%.2f + %.2f = %.2f\n", numero1, numero2,soma(numero1,numero2));

}
