#include<stdio.h>
#define TAM 1

struct aluno
 {
  int RA;
  char nome[30];
  char curso[20];
  float media;
 };

struct aluno aux[TAM];
FILE *fp;
char cont='s';
int i=0;

void main(void)
 {
  if ((fp=fopen("arquivo_binario.txt","w+b"))==NULL)
     printf("Arquivo nao pode ser aberto");


  while (cont=='s' && i<TAM)
   {
    printf("Digite um RA: ");
    scanf("%d",&aux[i].RA);
    fflush(stdin);
    printf("Digite um nome: ");
    gets(aux[i].nome);
    fflush(stdin);
    printf("Digite o nome do curso: ");
    gets(aux[i].curso);
    fflush(stdin);
    printf("Digite a media global: ");
    scanf("%f",&aux[i].media);
    fflush(stdin);

    fwrite(&aux[i],sizeof(struct aluno),1,fp);

    printf("Deseja continuar? (s/n)");
    cont=getchar();
    fflush(stdin);
    i++;
   }

  fclose(fp);
 }
