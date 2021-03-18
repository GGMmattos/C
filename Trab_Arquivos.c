#include <stdio.h>
#include <locale.h>
#define n_alunos 5
#include <stdlib.h>

struct cadastro_alunos
{
    int RA;
    char nome[20];
    char curso[20];
    float media_global;
};
    struct cadastro_alunos alunos[n_alunos] ;
    struct cadastro_alunos aux;

    FILE *arq;

    int i=0,j, min, t=0, cad=0, cad2=0, aux2=0;
    char op, op2;


void cadastro()
{

   printf("\n  ----Cadastro de alunos----\n");
    i=0;
    while (i<n_alunos)

    {
        printf("\nAluno[%d]", i+1);

        printf("\n  RA > ");
        scanf("%d",&alunos[i].RA);
        fflush(stdin);

        printf("  Nome do aluno > ");
        gets(alunos[i].nome);
        fflush(stdin);

        printf("  Curso > ");
        gets(alunos[i].curso);
        fflush(stdin);

        printf("  Media Global > ");
        scanf("%f",&alunos[i].media_global);
        printf("\n");
        fflush(stdin);
        i++;


    }
     printf("  \n\n  Cadastro realizado com sucesso!!!\n\n");
     getchar();
     i=0; //zera o i assim o while pode ser utilizado novamente
     aux2++; //verifica se ja existe dados cadastrados
}


void exibir_cadastros()
{
    printf("\n\n  ---Lista dos dados cadastrados---\n");
    for(int i=0; i<n_alunos; i++)
    {
        printf("\n  Aluno: %d", i+1);
        printf("\n  RA: %d", alunos[i].RA);
        printf("\n  Nome aluno: %s",alunos[i].nome);
        printf("\n  Curso: %s", alunos[i].curso);
        printf("\n  Media Global: %.2f",alunos[i].media_global);
        printf("\n");

    }
}

void leitura_arquivo()
{
        printf("\n\n  ----Leitura do arquivo----\n\n");

        int cont=1;

        if ((arq=fopen("arquivo_prova.txt","r+b"))==NULL)
        printf("\n\n  ---O arquivo não existe, para gravar dados e em um arquivo informe a opção 4 no menu.---");

        for(i=0; i<n_alunos; i++)
            {
                while (fread(&alunos[i],sizeof(struct cadastro_alunos),1,arq)!=NULL)
                    {
                    printf("  RA do aluno [%d]: %d \n",cont,alunos[i].RA);
                    printf("  Nome do aluno [%d]: %s \n",cont,alunos[i].nome);
                    printf("  Curso do aluno [%d]: %s \n",cont,alunos[i].curso);
                    printf("  Média global do aluno [%d]: %.1f \n",cont,alunos[i].media_global);
                    cont++;
                    printf("\n");

                    }
            }

      fclose(arq);

}

void ordenacao()
{

        for(i=0; i<n_alunos-1;i++)
        {
            min=i;

            for(j=i+1;j<n_alunos;j++)
            {
                if(alunos[j].RA < alunos[min].RA)
                min=j;
            }
            aux=alunos[min];
            alunos[min]=alunos[i];
            alunos[i]=aux;
        }
}

int main(void)
{
     setlocale(LC_ALL, "Portuguese");
     int escolha;


    do{
        system("cls");

        printf("\n\n     --- Avaliação 3 ---\n\n");
        printf("\n (1)Cadastrar dados\n");
        printf("\n (2)Exibir dados cadastrados\n");
        printf("\n (3)Organizar dados pelo RA\n");
        printf("\n (4)Gravar dados em arquivo\n");
        printf("\n (5)Ler dados em arquivo\n");
        printf("\n (6)sair do programa\n\n");
        fflush(stdin);

        printf("\n Digite um numero referente a opcão desejada > ");
        scanf(" %d", &escolha);
        fflush(stdin);

        switch(escolha)
        {
        case 1:

            if(cad==0){
                cadastro();
                cad++;
            }else if(cad==1)
            {
                printf("\n\n  ---Existem dados gravados, deseja sobrescrevê-los S/N?--- > ");
                op=getchar();
                fflush(stdin);

                if((op=='S')||(op=='s')){
                    cadastro();
                }else{
                    printf("\n\n  ---Você optou por não sobrescrever os dados!!!---\n\n");
                    getchar();}

            }
            cad=1;
        break;

        case 2:
            if(cad==0){
                printf("\n\n  --Não há dados cadastrados, caso queira cadastrar, informe a opção 1 no menu.--  \n\n");
             }else
                exibir_cadastros();
            getchar();

        break;

        case 3:
                if (cad==0){
                    printf("\n\n  --Não há dados cadastrados para ordenação, caso queira cadastrar, informe a opção 1 no menu.--  \n\n");
                }else
                {
                    printf("\n\n  ---Cadastros sem ordenação---\n\n");
                    for(i=0; i<n_alunos; i++)
                    {
                        printf("\n  Aluno: %d", i+1);
                        printf("\n  RA: %d", alunos[i].RA);
                        printf("\n  Nome aluno: %s",alunos[i].nome);
                        printf("\n  Curso: %s", alunos[i].curso);
                        printf("\n  Media Global: %.2f",alunos[i].media_global);
                        printf("\n");
                    }

                    ordenacao();

                    printf("\n\n  ---Cadastros com ordenação pelo RA---\n\n");
                    for(i=0; i<n_alunos; i++)
                    {
                        printf("\n  Aluno: %d", i+1);
                        printf("\n  RA: %d", alunos[i].RA);
                        printf("\n  Nome aluno: %s",alunos[i].nome);
                        printf("\n  Curso: %s", alunos[i].curso);
                        printf("\n  Media Global: %.2f",alunos[i].media_global);
                        printf("\n");
                    }
                }
            getchar();
        break;

        case 4:
            if(cad2==0)
            {
                if ((arq=fopen("arquivo_prova.txt","w+b"))==NULL)
                    printf("O Arquivo nao pode ser aberto");

                for(i=0; i < n_alunos; i++)
                    fwrite(&alunos[i],sizeof(struct cadastro_alunos),1,arq);
                fclose(arq);

                printf("\n\n  ---Dados gravados com sucesso!!!---\n\n");
                getchar();

                cad2++;
            }else if(cad2==1)
            {
                printf("\n\n  ---Existem dados gravados no arquivo, deseja sobrescrevê-los S/N?--- > ");
                op2=getchar();
                fflush(stdin);

                if((op2=='S')||(op2=='s'))
                {

                    if ((arq=fopen("arquivo_prova.txt","w+b"))==NULL)
                        printf("O Arquivo nao pode ser aberto");

                    for(i=0; i < n_alunos; i++)
                    fwrite(&alunos[i],sizeof(struct cadastro_alunos),1,arq);

                    fclose(arq);

                    printf("\n\n  ---Dados gravados com sucesso!!!---\n\n");

                }else{
                    printf("\n\n  ---Você optou por não sobrescrever os dados!!!---\n\n");
                    getchar();}

            }
            cad=1;

        break;

        case 5:
            leitura_arquivo();
            getchar();

        break;


        case 6:

            printf("\n\n  ---O Programa foi finalizado---\n\n");
            exit(1);

        default:
            printf("\n\nopção inválida!!!\n\n");

        }

    }while(t==0);
    printf("\n\n---O programa foi finalizado---\n\n");
    fclose(arq);
    return 0;

}















