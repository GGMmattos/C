#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char p[20], p2[20];
    int tam;

    printf(" Digite uma palavra > ");
    gets(p);

    strcpy(p2,p);           //copia os dados da string p para p2

    tam=strlen(p);          //fornece  o tamanho da string p em numero inteiro

    strrev(p2);             //codigo para a inversão da palavra


    if(strcmp(p,p2)==0){    //comparação, se as palavras forem iguais é igual a 0;
        printf("\n A palavra %s e um Palíndromo!!!\n\n", p);
    }else
        printf("\n A palavra %s nao e um Palíndromo!!!\n\n", p);
















    return 0;
}
