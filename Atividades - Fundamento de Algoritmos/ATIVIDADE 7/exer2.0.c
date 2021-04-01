#include <stdio.h>
#include <locale.h>
#define n_temp 4

int main() {
    setlocale(LC_ALL, "Portuguese");

    float temp[n_temp], soma=0, media=0;
    int negative=0, maior=0;

    for(int i=0; i < n_temp; i++){
        printf("\nInforme a %dº temperatura > ", i+1);
        scanf("%f", &temp[i]);

        soma+=temp[i];

        if(temp[i] < 0)
            negative++;
    } printf("-----------------------------------------");

    for(int i=0; i < n_temp; i++){
        printf("\npos > %d -  temperatura > %.2f°C \n", i+1, temp[i] );


     }for(int i=0; i < n_temp-1; i++){
            if(temp[i] > temp[n_temp-1] )
                maior++;

}
    printf("\nNumero de temperaturas maior que a ultima do periodo > %d ", maior);

}

