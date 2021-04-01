#include <stdio.h>
#include <locale.h>
#include<conio.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float temp, soma=0, media, maior=0, E;
    int n;

    do{
        printf("\nInforme a temperatura em graus celcius -> ");
        scanf("%f", &temp);
        fflush(stdin);
        soma= soma+temp;


        if(temp>maior){ //armazena a maior  temperatura em MAIOR
            maior=temp;
        }

        printf("\n\nDeseja continuar (S-sim/N=não> ");
        E=getchar();
        fflush(stdin);
        n++;
    }while(E!='N');
     printf("----------------------------------------------\n");
    media=soma/n;
    printf("\n Temperatura média da semana > %.1f°C", media);
    printf("\n Maior temperatura da semana > %.1f°C", maior);

    return 0;
}
