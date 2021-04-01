#include <stdio.h>

int func(int x, int y)
{
if(y==0){
    return 1;                           //x=2 y=3
}else
    return x * func(x, y -1);
}
int main()
{
    int x,y;

    printf("Informe X > ");
    scanf("%d",&x);
    printf("\nInforme Y > ");
    scanf("%d",&y);

    printf("\nRes > %d",func(x,y));
}
