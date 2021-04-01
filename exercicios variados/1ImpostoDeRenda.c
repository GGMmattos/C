#include <stdio.h>

int main()
{
    float salario, imposto=0;
    printf("Informe seu salario > ");
    scanf("%f", &salario);

    if(salario<=1000){
     printf("Voce esta isento do imposto de renda");
    }else
        if (salario<=2000){
         salario=(salario-1000)*0.10;
         printf("O  valor do IR eh igual a > %.2f", salario);

    }else
        if (salario<=3000){
        salario=(salario-2000)*0.20;
         printf("O  valor do IR eh igual a > %.2f", salario);
    }else
        if(salario>3000){
        salario=(salario-3000)*0.30;
        printf("O  valor do IR eh igual a > %.2f", salario);

        }








    return 0;
}
