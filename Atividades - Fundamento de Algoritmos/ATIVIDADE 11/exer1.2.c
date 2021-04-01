#include <stdio.h>

float soma(float n1,float n2, float *soma)
{
  *soma=n1+n2;                  //2°SOMA E R PASSARAM A TER O MESMO ENDEREÇO

}

void main(void)
{
    float numero1, numero2, R;
    printf("Digite um numero > ");
    scanf("%f",&numero1);

    printf("\nDigite outro numero > ");
    scanf("%f",&numero2);

    soma(numero1,numero2, &R);  // 1º PASSAGEM POR REFERENCIA

    printf("\nValor da soma: %.2f", R); // 3º COM ISSO CONSEGUIMOS MOSTRAR O RESULTADO Q ESTA EM SOMA PELA PROPRIA VAR R(MESMO ENDEREÇO)

}


