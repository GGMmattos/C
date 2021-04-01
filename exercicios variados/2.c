#include <stdio.h>

int main()
{

    float  raio,cir,area,diame;
    printf("Informe o raio da circulo > ");
    scanf("%f", &raio);

    diame = 2*raio;
    area = 3.14*raio*raio;
    cir = 2*3.14*raio;

    printf("O diametro do circulo > %.2f \n", diame);
    printf("A area do circulo > %.2f \n", area);
    printf("A circuferencia do circulo > %.2f \n", cir);









return 0;
}
