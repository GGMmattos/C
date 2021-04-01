#include <stdio.h>

int main()
{
    float  n, fat=1, i=1;;
    printf(" Informe um numero  > ");
    scanf("%f", &n);

    while(i<=n)
    {
    fat*=i;
    i++;
    }
    printf("\n \n O fator do numero %.2f eh > %.2f",n, fat);
}
