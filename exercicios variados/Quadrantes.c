#include <stdio.h>

int main()
{
    int x,y;
    printf("Informe X > ");
    scanf("%d", &x);

    printf("Informe Y > ");
    scanf("%d", &y);

    if((x>0) && (y>0))
        printf("A coordenada esta localizada no primeiro quadrante");
    else
    if((x>0) && (y<0))
        printf("A coordenada esta localizada no segundo quadrante");
    else
    if((x<0) && (y>0))
        printf("A coordenada esta localizada no terceiro quadrante");
    else
    if((x<0) && (y<0))
        printf("A coordenada esta localizada no quarto quadrante");
    else
    if((x==0) && (y==0))
        printf("A coordenada esta localizada no eixo do sistema");
    else
    if(y==0)
        printf("A coordenada esta localizada no eixo X");
    else
    if(x==0)
        printf("A coordenada esta localizada no eixo Y");









    return 0;

}

