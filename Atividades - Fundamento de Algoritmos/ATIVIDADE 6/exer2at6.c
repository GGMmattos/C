#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{ char p[20], p2[20];
  int tam;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite uma palavra > ");
    gets(p);
    strcpy(p2,p);

    tam=strlen(p);



    for(int i=0; i < tam/2; i++){
        char aux = p[i];    //armazena o character inicial
        p[i] = p[tam - i - 1]; //Troca os character da ponta oposta
        p[tam - i - 1] = aux; //Armazena o character inicial no p
    }

    if(strcmp(p,p2)==0){
        printf("\nA palavra %s é um palindromo\n\n", p2);
    }else
        printf("\nA palavra %s nao é um palindromo\n\n", p2);


    return 0;

    }









