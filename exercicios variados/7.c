#include <stdio.h>
#include <math.h>
//#include <locale.h>

int main()

{
    //setlocale(LC_ALL, "Portuguese");
    char nome[15];
    float altura, peso, densidade;
    printf("Informe seu nome > ");
    gets(nome);

    printf("Informe sua altura em metros > ");
    scanf("%f", &altura);

    printf("Informe seu peso > ");
    scanf("%f", &peso);

    densidade = peso/pow(altura,2);

    printf(" \nOla %s, seu IMC é > %.2f.", nome, densidade);












    return 0;
}
