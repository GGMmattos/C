#include <stdio.h>
#define linhas 3
#define colunas 3

int i, j;
float matriz[linhas][colunas];

void main(void)
 {
  for (i=0;i<linhas;i++)
    for (j=0;j<colunas;j++)
     {
      printf("Digite um valor real para a linha [%d] e coluna [%d]: ",i,j);
      scanf("%f",&matriz[i][j]);
     }

  printf("\n\n");

  for (i=0;i<linhas;i++)
    {
     for (j=0;j<colunas;j++)
      printf(" %-3.2f ",matriz[i][j]); // para ter o alinhamento dos numeros

      printf("\n");
    }
  }
