#include<stdio.h>
#define TAM 3

struct aluno
 {
  int RA;
  char nome[30];
  char curso[20];
  float media;
 };

struct aluno aux[TAM];
FILE *fp;

void main(void)
 {
  int cont=1; //somente para mostrar o número de ordem na tela.

  if ((fp=fopen("arquivo_binario.txt","r+b"))==NULL)
     printf("Arquivo nao pode ser aberto");

     for(int i=0; i<TAM; i++){
        while (fread(&aux[i],sizeof(struct aluno),1,fp)!=NULL)
        {
            printf("RA do aluno [%d]: %d \n",cont,aux[i].RA);
            printf("Nome do aluno [%d]: %s \n",cont,aux[i].nome);
            printf("Curso do aluno [%d]: %s \n",cont,aux[i].curso);
            printf("Media global do aluno [%d]: %.1f \n",cont,aux[i].media);
            printf("\n\n");
            cont++;

   }
   }


 }
/*
  //ATENÇÃO, O CÓDIGO DESCRITO A SEGUIR MOSTRA DUAS VEZES O ÚLTIMO REGISTRO GRAVADO NO ARQUIVO
  //Isso acontece porque a função "feof" só retorna fim de arquivo no ciclo de repetição seguinte
  //àquele que retornou o último registro. Então, nessa situação o código acaba ainda mostrando
  //na tela o último valor armazenado em "aux", que corresonde à uma nova exibição do último registro.

  while (!feof(fp))
   {
    fread(&aux,sizeof(struct aluno),1,fp);

    printf("RA do aluno [%d]: %d \n",cont,aux.RA);
    printf("Nome do aluno [%d]: %s \n",cont,aux.nome);
    printf("Curso do aluno [%d]: %s \n",cont,aux.curso);
    printf("Media global do aluno [%d]: %.1f \n",cont,aux.media);

    cont++;
    getchar();
   }
*/
