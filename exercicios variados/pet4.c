#include <stdio.h>

int main()
{
    int n1,n2,total, A;
    printf("Informe n1");
    scanf("%d", &n1);

     printf("Informe n2");
    scanf("%d", &n2);

    printf("Informe o tipo de calculo");
    scanf("%d", &A);

    switch(A)
    {
  case 1:
      printf("Soma \n");
      total =n1+n2;
      printf("n1 + n2 > %d", total);

    break;
    case 2:
     printf("subtracao \n");
     total =n1-n2;
      printf("n1 - n2 > %d", total);
    break;

    case 3:
     printf("multiplicacao \n");
     total =n1*n2;
      printf("n1 * n2 > %d", total);
    break;

    case 4:
     printf("Divisao \n");
     total =n1/n2;
      printf("n1 / n2 > %d", total);
    break;







    }



}
