#include <stdio.h>

int fatorial(int num)
{
int fat;
for(fat=1; num > 1; num--){

    fat*= num;
}

return fat;
}

void main(void)
{
int N, P,dif, calc;
printf("Informe N > ");
scanf("%d", &N);

do{

printf("\nInforme P > ");
scanf("%d", &P);

}while(P>N);

dif = N-P;
printf("\n Valor do fator de %d: %d \n\n",N,fatorial(N));
printf("\n Valor do fator de %d: %d \n\n",P,fatorial(P));
printf("\n Valor do fator de %d: %d \n\n",P,fatorial(dif));

calc=fatorial(N)/(fatorial(P)*fatorial(dif));
printf("\n\n Valor de C > %d", calc);

}
