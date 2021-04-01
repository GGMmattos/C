#include <stdio.h>
#include <locale.h>

int main()
 {
    setlocale(LC_ALL, "Portuguese");
    float temp, soma=0, media, maior=0;
    int n, N=1;
    for(int i=0; i<7; i++){

        printf("Informe a %d° temperatura em graus celcius -> ", N);
        scanf("%f", &temp);

        soma= soma+temp;

            if(temp>maior){
            maior=temp;
            }
        printf("----------------------------------------------\n");
        N++;
    }
    media=soma/7;
    printf("\n Temperatura média da semana > %.1f°C", media);
    printf("\n Maior temperatura da semana > %.1f°C", maior);

















    return 0;
 }
