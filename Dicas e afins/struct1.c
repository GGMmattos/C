#include<stdio.h>

struct tipo_pessoa
  {
	char nome[20];
	int idade;
	char sexo;
	char telefone[18];
	char endereco[30];
  };

struct tipo_pessoa variavel_pessoa;

void main(void)
  {
    printf ("Digite um nome: ");
    gets(variavel_pessoa.nome);
    fflush(stdin);
    printf ("Digite uma idade: ");
    scanf("%d",&variavel_pessoa.idade);
    fflush(stdin);
    printf ("Digite o sexo(M/F): ");
    variavel_pessoa.sexo=getchar();
    fflush(stdin);
    printf ("Digite o telefone: ");
    gets(variavel_pessoa.telefone);
    fflush(stdin);
    printf ("Digite o endereco: ");
    gets(variavel_pessoa.endereco);
    fflush(stdin);

    printf("\n\n\n");

    printf ("Nome: %s \n", variavel_pessoa.nome);
    printf ("Idade: %d \n", variavel_pessoa.idade);
    printf ("Sexo: %c \n", variavel_pessoa.sexo);
    printf ("Telefone: %s \n", variavel_pessoa.telefone);
    printf ("Endereco: %s \n", variavel_pessoa.endereco);
  }
