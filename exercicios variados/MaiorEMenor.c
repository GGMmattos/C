#include <stdio.h>


int main()
{
    int n1,n2,n3, menor, maior;

    printf("Informe 3 numeros > \n");
    scanf("%d %d %d",&n1,&n2,&n3 );


    if((n1>n2)&&(n1>n3)){
    maior=n1;
    }else
    if ((n2>n1)&&(n2>n3)){
        maior=n2;
    }else
    if((n3>n1)&&(n3>n2)){
        maior=n3;
    }if((n1<n2)&&(n1<n3)){
        menor=n1;
    }else
    if ((n2<n1)&&(n2<n3)){
        menor=n2;
    }else
    if((n3<n1)&&(n3<n2)){
        menor=n3;
    }

    printf("O maior numero %d", maior);
    printf("\nO menor numero %d", menor);



    return 0;
}
