#include <stdio.h>

int main () {
    int matriz[3][3];


    for (int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            printf("pos[%d][%d] > ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        }
    for (int i=0; i < 3; i++){
        for(int j=0; j < 3; j++)
            printf("\nposicao [%d] [%d] = %d",i,j, matriz[i][j]);

        }





    return 0;
}
