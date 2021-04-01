#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char palavra[20],C;
    int tam, J;


    printf(" Informe a palavra > ");
    gets(palavra);

    printf(" Informe um caractere > ");
    C=getchar();

    tam=strlen(palavra);

    for(int i=0; i<tam; i++){ //percorre a string
        //printf(" %c\n", palavra[i]);
        if(palavra[i]==C)
        J++;
    }

    printf("\n Numero de letra '%c' na palavra '%s' = %d \n", C, palavra, J);


    return 0;
}
