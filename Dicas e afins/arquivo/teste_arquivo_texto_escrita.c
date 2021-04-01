#include<stdio.h>

#define TAM 5
int i;
char tabela[TAM][30];
FILE *fp;


void main(void)
 {
  if ((fp=fopen("arquivo_texto.txt","w+"))==NULL)
     printf("Arquivo nao pode ser aberto");

  for (i=0;i<TAM;i++)
   {
    printf("Digite um nome para [%d]: ",i);
    gets(tabela[i]);
   }

  for (i=0;i<TAM;i++)
    fprintf(fp,"Nome[%d]: %s \n", i, tabela[i]);

   fclose(fp);
 }
