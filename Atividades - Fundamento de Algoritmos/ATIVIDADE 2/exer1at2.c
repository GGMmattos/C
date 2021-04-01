#include <stdio.h>

int main()
{
   int idade, soma;

   printf("---Digite a idade, se idade>70(idoso), o programa ira parar e informar a soma das idades ate entao informadas--- \n \n");
   printf("Informe a idade > ");
   scanf("%d", &idade);

   while(idade <= 70)
   {
    soma = soma +idade;
    printf("Informe a idade > ");
    scanf("%d", &idade);
   }
    printf("\n IDADE MAIOR QUE 70 INFORMADA!!! \n \n ");
   printf("\n A soma de todas as idades a baixo de 70 anos  > %d", soma);
}

