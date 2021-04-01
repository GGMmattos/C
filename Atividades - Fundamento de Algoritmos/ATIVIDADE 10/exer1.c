#include <stdio.h>

int fatorial(int num)
{
 int fat;
 for(fat=1; num > 1; num--){ //função que calcula o fatorial
    fat*= num;
}
 return fat;
}

void main(void)
{
  int N,P,calc;
    do{
        printf("\nInforme N > ");
        scanf("%d", &N);
                                    //N>P para que o  usuário prossiga
        printf("Informe P > ");
        scanf("%d", &P);
    }while(P>N);

    printf("\n Valor do fator de N: %d \n\n",fatorial(N));
    printf("\n Valor do fator de P: %d \n\n",fatorial(P));
    printf("\n Valor do fator de %d-%d: %d \n\n",N,P,fatorial(N-P));
    printf("---------------------------------");

    calc=fatorial(N)/(fatorial(P)*fatorial(N-P));
    printf("\n\n Valor de C > %d\n\n", calc);

}

