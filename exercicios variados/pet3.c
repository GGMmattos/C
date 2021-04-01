#include <stdio.h>

int main()

{
    float salario, novo;
     printf("Informe o salaario");
     scanf("%f", &salario);

     if(salario<2000){

        salario=(salario*0.30)+salario;
        printf("%.2f", salario);
     }else
        salario=(salario*0.15)+salario;
        printf("%.2f", salario);


}
