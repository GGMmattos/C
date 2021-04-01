#include <stdio.h>

int main()
{
    float salario, ir;
    printf("Informe o seu salario;")
    scanf("%f", &salario);

    if(salario<1000.00)
        printf("Voce esta insento");
    else if(salario <=2000){
            ir=salario*0.10;
        printf("%.2f", ir);
    }






}
