#include <Stdio.h>
#include <math.h>

float distancia_pontos(float *X1, float*Y1, float*X2, float*Y2)
{
float d=0;
d=sqrt((pow(*X1-*X2,2))+(pow(*Y1-*Y2,2)));

return d;     // RETORNO DA FUNÇÃO POR 'd'=RESULTADO
}

void main(void)
{
    float x1,x2,y1,y2;
    printf("Informe a primeira cordenada(x1, y1): \n");
    scanf("%f \n%f",&x1, &y1);

    printf("Informe a segunda cordenada(x2, y2): \n");
    scanf("%f \n%f",&x2, &y2);

    printf("\nDistancia entre os pontos %.2f",distancia_pontos(&x1,&y1,&x2,&y2)); //PASAGENS POR REFERENCIA

}
