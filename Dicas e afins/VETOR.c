#include<stdio.h>

int i, vetor[10];

void main(void)
 {
  for (i=0;i<10;i++)
   {
    printf("Digite um valor para a posicao [%d]: ",i);
    scanf("%d",&vetor[i]);
   }

  for (i=0;i<10;i++)
   {
    printf("Valor armazenado na posicao [%d]: %d\n",i,vetor[i]);
   }
  }
