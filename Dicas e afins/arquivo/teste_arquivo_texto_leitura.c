#include<stdio.h>

int i;
char tabela[10][30];
char linha[30];
FILE *fp;


void main(void)
 {
  if ((fp=fopen("arquivo_texto.txt","r+"))==NULL)
     printf("Arquivo nao pode ser aberto");



  fgets(linha, 30, fp);
  while(!feof(fp))
   {
    printf("%s",linha);
    fgets(linha, 30, fp);
    getchar();
   }

   fclose(fp);
 }
