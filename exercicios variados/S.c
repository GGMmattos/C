#include <stdio.h>

int main()
{
    float r, altura, volume;
    printf("Informe o valor de raio > ");
    scanf("%f",&r);

    printf("Informe a altura > ");
    scanf("%f",&altura);

    volume = 3.14159*(r*r)*altura;

    printf("O valume da lata de olho > %.2f", volume);

}
