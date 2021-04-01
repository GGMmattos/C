#include <stdio.h>

int main()
{

    int m,n;

    printf("Informe um valor M maior> ");
    scanf("%d", &m);
    m--;
    printf("Informe um valor N menor > ");
    scanf("%d", &n);
    printf("\n  Valores entre M e N no intervalo decrescente \n \n");
    while(m > n){

        printf("  %d ", m);

        m--;
    }
}
