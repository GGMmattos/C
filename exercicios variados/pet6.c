#include<stdio.h>

int main()
{
    int i,  n, tab;
    printf("Informe o i >");
    scanf("%d", &n);

    for(  i=0; i<=10; i++){
    tab= i*n;
    printf("%d * %d > %d \n", n, i,tab);
    }
}
