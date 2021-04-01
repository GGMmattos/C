#include <stdio.h>
int soma=0;
int func(int i, int j, int k){

    if(i<=j){
        soma+=i;
        printf("%d\n",i); //Valores que foram somados(termos dentro do intervalo (I,J) com incremento k)
        func(i+k,j,k);
    }
    return soma;
}
int main(){

int i, j, k;
printf("Informe o valor de I: ");
scanf("%d", &i);

printf("Informe o valor de J: ");
scanf("%d", &j);

printf("Informe o valor de K: ");
scanf("%d", &k);

printf("\nSoma dos termos dentro do intervalo de %d a %d com incremento %d >  %d  ",i,j,k, func(i,j,k));

return 0;
}
