#include <stdio.h>
#define n_carros 4
#include <locale.h>

struct venda_carros
{
    char modelo[20];
    int ano;
    float preco;
    char placa[10];

};
    struct venda_carros var_carros[n_carros];
    float menor;
    int mesmo=0;
    int main()
    {
    setlocale(LC_ALL, "Portuguese");
    for(int i=0; i < n_carros; i++){

    printf(" Carro %d\n  Modelo > ", i+1);
    gets(var_carros[i].modelo);
    fflush(stdin);

    printf("  Ano > ");
    scanf("%d", &var_carros[i].ano);
    fflush(stdin);

    printf("  Preço > ");
    scanf("%f", &var_carros[i].preco);
    fflush(stdin);

    printf("  Placa > ");
    gets(var_carros[i].placa);
    fflush(stdin);

    printf("\n\n");

    }
    printf("Carro(s) mais barato: ");
        menor=var_carros[0].preco;
        for(int i=0; i < n_carros; i++){
            if(var_carros[i].preco < menor )
            menor=var_carros[i].preco;

       }for(int i=0; i < n_carros; i++){
            if(var_carros[i].preco == menor){
            printf("\nO carro %s do ano %d", var_carros[i].modelo, var_carros[i].ano);
            mesmo++;
        }
        if(mesmo > 1){
            printf("\n--Ambos possuem o mesmo preço--\n");
        }
       }

    return 0;
    }
