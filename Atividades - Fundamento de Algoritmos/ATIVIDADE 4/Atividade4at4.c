#include <stdio.h>
#include<conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char  sexo,E,curso;                  //E= Escolha, no caso S/N(se deseja continuar com a "pesquisa")
    int idade, n, mi=0;                        //N=Numero de alunos que participaram da pesquisa
    int masc=0, fem=0, naogosta=0;
    float percentual;
        printf("\n  ----PESQUISA UNIVERSITARIA----\n");

        do{
            printf("----------------------------------------");
            printf("\n\n  Sexo? (M- masculino; F- feminino) > ");
            sexo=getchar();
            fflush(stdin);


            printf("\n  Idade?(em anos) > ");
            scanf("%d", &idade);
            fflush(stdin);

            printf("\n  Gosta do curso que está fazendo? (S- sim; N- não) > ") ;
            curso=getchar();
            fflush(stdin);

            printf("\n  Deseja continuar? (S- sim; N- não) > " );
            E=getchar();
            fflush(stdin);

                if(sexo=='M'){
                    masc++;
                }else if (sexo=='F'){
                    fem++;
                }

                if((sexo=='M')&&(idade < 23)&& (curso == 'N')){
                    naogosta++;
                }n++;

                if ((sexo=='F')&&(idade >19)&&(idade<21)&&(curso =='S'))
                mi++;
       }while(E !='N');
        printf("----------------------------------------");
        percentual=((float)fem/(float)n)*100;
        printf("\n\n Número de homens que responderam > %d", masc);
        printf("\n\n Número de mulheres que responderam > %d", fem);
        printf("\n\n Número de mulheres entre 19 e 21 que gostam do curso que faz  > %d", mi);
        printf("\n\n Número total de alunos que participaram da pesquisa > %d", n);
        printf("\n\n Percentual de mulheres que responderam> %.2f%%", percentual);
        printf("\n\n Número de homens com menos de 23 anos que não gostam do curso que estão fazendo > %d\n", naogosta);






    return 0;
}
