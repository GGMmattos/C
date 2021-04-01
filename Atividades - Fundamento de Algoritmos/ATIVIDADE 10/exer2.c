    #include <stdio.h>
    #include <locale.h>

    float media=0;

    float leitura()
    {
     float  temp,soma=0;
        for(int i=0; i < 7; i++){
            printf("\nInforme a temperatura %d > ", i+1);       //função que faz leitura dos dados
            scanf("%f", &temp);
            fflush(stdin);
            soma += temp;
        }
        media = soma/7;
        return media;
    }

    int main()
       {
        setlocale(LC_ALL, "Portuguese");
        float F=0, C=0;
         char escolha1, escolha2;
        printf("Deseja informar a temperatura em celsius(c) ou Fehreinheit(f) > ");
        scanf("%c", &escolha1);
        fflush(stdin);
        leitura();

        printf("Deseja ver a media em celsius(c) ou Fehreinheit(f) > ");
        scanf("%c", &escolha2);
        fflush(stdin);

        if(((escolha1=='c')|| (escolha1=='C'))&&((escolha2=='c')||(escolha2=='C')))
           printf("\nMedia da temperatura em celsius > %.1f°C\n", media);
        else if(((escolha1=='c')|| (escolha1=='C'))&&((escolha2=='f')||(escolha2=='F'))){
            F=media*1.8+32;
             printf("\nMedia da temperatura em Fehreinheit > %.1fºF\n", F);                 //da a resposta de acordo com as escolhas do usuário
        }else if(((escolha1=='f')|| (escolha1=='F'))&&((escolha2=='f')||(escolha2=='F'))){
            printf("\nMedia da temperatura em Fehreinheit > %.1f°F\n", media);
        }else if(((escolha1=='f')|| (escolha1=='F'))&&((escolha2=='c')||(escolha2=='C'))){
            C=(media-32)/1.8;
            printf("\nMedia da temperatura em celsius > %.1f°C\n", C);
        }
       }






