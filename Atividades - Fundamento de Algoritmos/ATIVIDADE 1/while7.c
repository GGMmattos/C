#include <stdio.h>

int main()
{
   float idade, soma, i=0, media=0;

   printf("---Digite a idade, se idade>70 o programa ira parar e informar a media das idades ate entao informadas --- \n \n");
   printf(" Informe a idade > ");
   scanf("%f", &idade);

   while(idade < 70)
   {
    soma = soma +idade;
    printf(" Informe a idade > ");
    scanf("%f", &idade);
    i++;
   }
    printf(" \n\nIDADE INFORMADA MAIOR QUE 70 \n \n ");
    media = (soma/i);
    printf("\nMedia das idades informadas > %.2f", media);
}

