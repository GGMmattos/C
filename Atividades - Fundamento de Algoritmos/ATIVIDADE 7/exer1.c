#include <stdio.h>
#include <locale.h>
#define n_temp 4

int main() {
    setlocale(LC_ALL, "Portuguese");

    float temp[n_temp], soma=0, media=0;
    int negative=0;

    for(int i=0; i < n_temp; i++){
        printf("\nInforme a %d° temperatura > ", i+1);
        scanf("%f", &temp[i]);

        soma+=temp[i];

        if(temp[i] < 0)
            negative++;


    } printf("\n--------------------------------\n");

    for(int i=0; i < n_temp; i++){
        printf("\npos > %d -  temperatura > %.1f°C \n", i+1, temp[i] );


     }
    printf("\n-----------------------------------------");
    printf("\nNumero de temperaturas negativas > %d", negative);
    printf("\n-----------------------------------------");
    printf("\nSoma das temperaturas positivas > %.2f", soma);
    printf("\n-----------------------------------------");
    printf("\nMedia das temperaturas no periodo > %.1f°C", soma/n_temp);
    printf("\n-----------------------------------------");

        return 0;
    }
