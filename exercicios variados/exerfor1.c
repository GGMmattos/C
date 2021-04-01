#include <stdio.h>

int main()
{
    int n, soma=0;

    do{
        printf("Digite um numero inteiro e positivo > ");
        scanf("%d", &n);

        soma+=n;

    }while(n!=0);

    printf("%d", soma);

    return 0;
}
