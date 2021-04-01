#include <stdio.h>

struct acad_pessoa
{
    char  nome[20];
    float altura;
    float peso;
    int   idade;
    char  telefone[20];
    char  email[20];
};
    struct acad_pessoa var_aluno;

    int main()
    {

    printf("Informe um nome > ");
    gets(var_aluno.nome);
    fflush(stdin);

    printf("Informe uma altura > ");
    scanf("%f", &var_aluno.altura);
    fflush(stdin);

    printf("Informe um peso > ");
    scanf("%f", &var_aluno.peso);
    fflush(stdin);

    printf("Informe uma idade > ");
    scanf("%d", &var_aluno.idade);
    fflush(stdin);

    printf("Informe um telefone > ");
    gets(var_aluno.telefone);
    fflush(stdin);

    printf("Informe o email > ");
    gets(var_aluno.email);

    printf("\n\n\n");
    printf("Nome: %s\n", var_aluno.nome);
    printf("Altura: %.2f\n", var_aluno.altura);
    printf("Peso: %.2f\n", var_aluno.peso);
    printf("Idade: %d\n", var_aluno.idade);
    printf("Telefone: %s\n", var_aluno.telefone);
    printf("Email: %s\n", var_aluno.email);






        return 0;
    }
