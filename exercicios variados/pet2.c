#include <stdio.h>

int main()
{
    int ano;
    printf("Informe o ano");
    scanf("%d", &ano);

    if((ano%4==0)&&(ano%400))
    {
        printf("O ano e bissesto");
    }
    else if(ano%100==0)
    {
        printf("nao e um ano bissesto");
    }





}
