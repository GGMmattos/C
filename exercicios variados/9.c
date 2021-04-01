#include <stdio.h>

int main()
{   int n1,n2,n3;
    int maior=0;
    printf("Informe 3 numeros > ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1>maior){
        maior=n1;
        printf("\n%d", n1);
    }if(n2>maior){
        maior=n2;
        printf("\n%d", n2);
    }if(n3>maior){
        printf("\n%d", n3);
        maior=n3;
    }

}
