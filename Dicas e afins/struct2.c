include<stdio.h>

#define num_alunos 3

struct tipo_aluno
  {
	char nome[30];
	float n1;
	float n2;
	float n3;
	float n4;
  };

struct tipo_aluno vetor_alunos[num_alunos];
int i;

void main(void)
  {
    for (i=0;i<num_alunos;i++)
     {
      printf ("Digite o nome do aluno [%d]: ",i+1);
      gets(vetor_alunos[i].nome);
      fflush(stdin);
      printf ("Digite a nota 1 do aluno [%d]: ",i+1);
      scanf("%f",&vetor_alunos[i].n1);
      fflush(stdin);
      printf ("Digite a nota 2 do aluno [%d]: ",i+1);
      scanf("%f",&vetor_alunos[i].n2);
      fflush(stdin);
      printf ("Digite a nota 3 do aluno [%d]: ",i+1);
      scanf("%f",&vetor_alunos[i].n3);
      fflush(stdin);
      printf ("Digite a nota 4 do aluno [%d]: ",i+1);
      scanf("%f",&vetor_alunos[i].n4);
      fflush(stdin);
     }

    printf ("\n\n");

    for(i=0;i<num_alunos;i++)
     {
      printf ("Nome do aluno [%d]: %s \n",i+1,vetor_alunos[i].nome);
      printf ("Nota 1 do aluno [%d]: %f \n",i+1,vetor_alunos[i].n1);
      printf ("Nota 2 do aluno [%d]: %f \n",i+1,vetor_alunos[i].n2);
      printf ("Nota 3 do aluno [%d]: %f \n",i+1,vetor_alunos[i].n3);
      printf ("Nota 4 do aluno [%d]: %f \n",i+1,vetor_alunos[i].n4);
      printf ("\n\n");
     }
   }
