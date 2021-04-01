#include <stdio.h>
#define n_alunos 4
#include <locale.h>


struct notas_alunos
{
    char nome[20];
    float notas[4];
};
    struct notas_alunos var_alunos[n_alunos];

int main()
    {
    setlocale(LC_ALL, "Portuguese");
    int i,mesmo=0;
    char name[20];
    float maior=0;

    for(i=0; i< n_alunos; i++){
        printf("\n\nNome do aluno %d > ", i+1);
        gets(var_alunos[i].nome);
        fflush(stdin);
        for(int j=0; j<4; j++){
            printf("  Nota %dº Bimestre >  ", j+1);
            scanf("%f", &var_alunos[i].notas[j]);
            fflush(stdin);
                if(var_alunos[i].notas[2] > maior)
                maior=var_alunos[i].notas[2];
            }
        }
            printf("\n\nAluno(s) com maior nota no 3ºBimestre: ");
            for(i=0; i< n_alunos; i++){
                if(var_alunos[i].notas[2]==maior){
                printf("\n  %s", var_alunos[i].nome);
                mesmo++;
                }
                }
                if(mesmo >= 2){
                printf("\n OBS: Ambos possuem a mesma nota no 3 bimestre\n");
                }

        return 0;
    }





