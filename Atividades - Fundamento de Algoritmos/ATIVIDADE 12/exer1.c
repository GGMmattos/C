#include <stdio.h>
#include <locale.h>


void mostra_vetor(int v[], int TAM)
  {
   int i;
   for (i=0;i<TAM;i++)
       printf("Temp %d: %d° \n",i+1,v[i]);
   printf("\n\n");
   }

void conversao(int v[], int TAM)
{
    for (int i=0;i<TAM;i++){
        v[i]=v[i]*1.8+32;
    }
}

void main(void)
 {
    setlocale(LC_ALL, "Portuguese");
    int vet[12];

    for(int i=0; i < 12; i++){
        printf("%d° Temp > ", i+1);
        scanf("%d", &vet[i]);
    }

    printf("\n***Temperaturas em Celsius***\n");
    mostra_vetor(vet,12);

    conversao(vet,12);

    printf("\n***Temperaturas em Fahrenheit***\n");
    mostra_vetor(vet,12);

}
