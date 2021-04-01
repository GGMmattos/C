#include <stdio.h>
#include <locale.h>
#define a 2

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome [a] [30];
    int cont=1;

    for(int i=0; i < a; i++){
         printf("\nInforme o %d° nome > ", cont);
         gets(nome[i]);
         cont++;
    }

    printf("\n--------------------------------------\n");

    printf("\nNomes que começam com a letra C : \n");

    for(int i=0; i < a; i++){

        if((nome[i][0] == 'C') || (nome[i][0] == 'c')){
        printf("\n%s\n", nome[i]);
        }
    }
    return 0;
}
