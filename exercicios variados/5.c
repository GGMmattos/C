#include <stdio.h>

int main()
{
    float maior, menor, area;
    printf("Informe a diagonal menor do losango > ");
    scanf("%f", &menor);

    printf("Informe a diagonal maior do losango > ");
    scanf("%f", &maior);

    area = (menor*maior)/2;

    printf("\n A area do losango > %.2f", area);


}
