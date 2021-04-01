#include <stdio.h>
#include<conio.h>


int main()
{
    float litros, total;
    char t;
    printf("-----------------------------------------\n");
          printf("      G para gasolina\n");
          printf("      A para alcool\n");
          printf("      D para diesel\n \n" );

    printf("Informe o tipo do combustivel > ");
    t=getchar();
    fflush(stdin);

    printf("\nQual eh a quantidade em litros? > ");
    scanf("%f", &litros);


    switch(t){
        case 'G':
            total=1.20*litros;
            printf("Total a pagar > R$%.2f", total);

            break;
        case 'A':
            total=0.70*litros;
            printf("Total a pagar > R$%.2f", total);

            break;
        case 'D':
            total=0.60*litros;
            printf("Total a pagar > R$%.2f", total);
            break;
        default:
            printf("Opcao nao disponivel");
    }







    }


