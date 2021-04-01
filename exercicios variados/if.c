#include <stdio.h>

int main()
{
    int x,y;
    printf("Informe o valor de x > ");
    scanf("%d", &x);
    printf("\nInforme o valor de y > ");
    scanf("%d", &y);

    if(x<y)
    printf("\nValor de X < Y");
    if(y<x)
    printf("\nValor de X > Y");
    else
    printf("\nOs valores sao iguais");






    return 0;
}
