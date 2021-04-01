#include <stdio.h>

int main()
{
   float idade, soma, i=0, media=0;

   printf("---Digite a idade, se idade>70(idoso) o programa ira parar e informar a media das idades ate entao informadas --- \n \n");
   printf(" Informe a idade > ");
   scanf("%f", &idade);

   while(idade <= 70)
   {
    soma = soma +idade;
    printf(" Informe a idade > ");
    scanf("%f", &idade);
    i++;
   }
    printf("    \n \n IDADE IDADE INFORMADA MAIOR QUE 70!!! \n \n ");
    media = (soma/i);
    printf("\nMedia das idades informadas, a baixo de 70 anos > %.2f", media);
}

