#include <stdio.h>
#include <locale.h>
#include<conio.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1,n2,n3,n4, media, maiorM, mediaT=0, contA=0, somaM=0;

    char E;
    do{
        printf("\nInforme a primeira nota > ");
        scanf("%f", &n1);
        printf("\nInforme a segunda nota  > ");
        scanf("%f", &n2);
        printf("\nInforme a terceira nota > ");
        scanf("%f", &n3);
        printf("\nInforme a quarta nota   > ");
        scanf("%f", &n4);
        fflush(stdin);
        contA++;

        media= ((n1*1) + (n2*2) + (n3*3) + (n4*4))/10;
        printf("\nMedia > %.2f > ", media);

        somaM+=media;  //soma de todas a médias

            if(media > maiorM){
            maiorM = media;
                }
        printf("\n-------------------------------------------\n");
        printf("\nDeseja continuar? (S- sim | N- não) > ");
        E=getchar();
        fflush(stdin);
        printf("\n-------------------------------------------\n");

    }while(E!='N');

    mediaT=somaM/contA;
    printf("\n\nMaior media da turma > %.2f", maiorM);
    printf("\n\nMedia da turma > %.2f", mediaT);
    printf("\n\n--------------------------------------------\n");
    return 0;
}
