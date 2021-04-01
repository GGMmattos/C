#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota [30][4], soma=0;
    float media[30];
    int h=1, a=1, entre=0, maior=0;

        for(int i=0; i<30; i++){
            for(int j=0; j<4; j++){
                printf("\n informe a %d° nota do aluno %d  > ", h, a);
                scanf("%f", &nota[i][j]);
                soma+=nota[i][j];
                media[i] =  soma/4;
                h++;
        }
        printf("\n----------------------------------\n");
        soma=0;
        a++;
        h=1;
        }
            a=1;
        for(int i=0; i<30; i++){
            printf("\nMedia aluno %d > %.2f",i, media[i]);
            printf("\n--------------------\n");
                if(media[i] > media[29])
                    maior++;
                if((media[i]>3.0) && (media[i]<6.0)){
                entre++;
            }
        }

        printf("\n\nNotas entre 3.0 e 6.0 > %d", entre);

        printf("\n\nNumero de alunos com a nota maior que a do ultimo aluno >  %d \n", maior);


    }













