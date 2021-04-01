#include <stdio.h>
#include <locale.h>
#define NUMa 4    //constate numero de alunos

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota [NUMa][4], soma=0;
    float media[NUMa];
    int h=1, a=1, entre=0, maior=0;

        for(int i=0; i<NUMa; i++){
            for(int j=0; j<4; j++){
                printf("\n informe a %d° nota do aluno %d  > ", j+1, i+1);
                scanf("%f", &nota[i][j]);
                soma+=nota[i][j];
                media[i] =  soma/4;
        }
        printf("\n----------------------------------\n");
        soma=0;

        }
        for(int i=0; i<NUMa; i++){
            printf("\nMedia aluno %d > %.2f",i+1, media[i]);
            printf("\n--------------------\n");
                if(media[i] > media[NUMa-1])
                    maior++;
                if((media[i]>=3.0) && (media[i]<=6.0)){
                entre++;

            }
        }

        printf("\n\nNotas entre 3.0 e 6.0 > %d", entre);

        printf("\n\nNumero de alunos com a media maior que a do ultimo aluno >  %d \n", maior);


    }













