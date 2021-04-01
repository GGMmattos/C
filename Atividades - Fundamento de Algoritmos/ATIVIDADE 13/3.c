#include <stdio.h>
int a=0;
void imprime_valores(int n)
{
    if(a<=n){
     printf("\n%d",a+2);
     imprime_valores(n);
    }
}
int main()
{
    int N;
    printf("Informe um valor de N > ");
    scanf("%d", &N);

    imprime_valores(N);

 return 0;
}
