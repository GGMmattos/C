#include <stdio.h>

int main()
{
    int vet[10];
   for(int i=1;i<=10;i++)
   {
         printf("Informe o valor %d > " , i);
         scanf("%d", &vet[i]);

   }
    for(int i=0;i<=10;i++)
    {
        printf("%d\n",vet[i]);
    }





}
