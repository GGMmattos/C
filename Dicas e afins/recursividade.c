#include <stdio.h>

void imprime_valores(int n, int a)
{
    if(a<=n){
     printf("\n%d",a);
     imprime_valores(n,a+2);
    }
}
int main()
{
    int N;
    int A=0;
    printf("Informe um valor de N > ");
    scanf("%d", &N);

    imprime_valores(N, A);

 return 0;
}
