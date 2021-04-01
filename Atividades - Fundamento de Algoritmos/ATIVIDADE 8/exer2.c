#include <stdio.h>
#include <locale.h>
#define linha 10
#define coluna 10


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float matriz [linha][coluna], soma=0;

    printf("  Digite os valores para as posições a baixo\n\n");
    for(int i=0; i < linha; i++){
         for(int j=0; j < coluna; j++){
            printf("  [%d] [%d] > ",i, j);
            scanf("%f", &matriz[i][j]);
         }
         printf("\n");
    }
    for(int i=0; i < linha; i++){
         for(int j=0; j < coluna; j++){
          printf("  %-3.2f ",matriz[i][j]);
         }
        printf("\n");
    }

    for(int i=0; i < linha; i++){
         for(int j=0; j < coluna; j++){
         if(i > j)
        soma +=matriz[i][j];
         }
    }
    printf("  \n  ---------------------------------------------------\n");
    printf("\n  Soma dos valores a baixo da diagonal principal = %2.f\n\n", soma);









    return 0;
}
