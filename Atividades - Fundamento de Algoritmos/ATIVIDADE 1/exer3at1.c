#include <stdio.h>

int main()
{
    int x=1, n;
    printf(" Informe N > ");
    scanf("%d", &n);
    n--;
    printf("\n---NUMEROS PARES ENTRE 1 E N--- \n \n");
    while(x <= n){


    if (x%2 ==0){
        printf("  %d ",x);
      }
    x++;
    }



}
