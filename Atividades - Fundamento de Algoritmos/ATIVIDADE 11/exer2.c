#include <Stdio.h>



int fatorial(int num, int *fat)
{
 for(*fat=1; num > 1; num--){ //FUNÇÃO QUE CALCULA O FATORIAL
    *fat*= num;
 }
}

void main(void)
{
    int n, R;
    printf("Informe um numeros > ");
    scanf("%d",&n);
    fatorial(n,&R);          //R COMPARTILHA SEU ENDEREÇO COM FAT(PASSAGEM POR REFERENCIA)
    printf("\nValor do fatorial de %d > %d\n",n,R); //MOSTRAMOS O RESULTADO CONTIDO EM FAT EM R(MESMO ENDEREÇO)

}

