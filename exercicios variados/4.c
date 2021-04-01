#include <stdio.h>

int main()
{
   int n1,n2;
   float media;
   printf("informe um numero > ");
   scanf("%d", &n1);

   printf("informe um numero > ");
   scanf("%d", &n2);

   media=((float)n1+(float)n2)/2;

   printf(" \nA media e > %.2f", media);

   return 0;

}
