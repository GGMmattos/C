#include<stdio.h>

int main()
{
    float  n1, soma=0, media=0;
    int i=0;


    do{
     printf("Informe um numeros > ");
     scanf("%f", &n1);

    soma= soma+n1;
    i++;
    }while(n1 != 0);
    media = soma/(i-1);
     printf("soma > %.2f ", soma);
    printf("Media > %.2f ", media);


}
