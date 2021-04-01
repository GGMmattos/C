#include <stdio.h>

int main()
{
    int n[10], menor=0;
    for(int i=0; i<=10; i++){

    printf("Informe um numero");
    scanf("%d", &n[i]);

    }

    for(int i=0; i<=10; i++){

    if(n[i]> menor)
    menor=n[i];
    printf("pos %d", n[i]);
}





}
