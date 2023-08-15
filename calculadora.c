#include <stdio.h>
int main(){

    float a, b, ad, sub, mul, div;
    int opcao;

    do{
            printf("\n digite:\n 1 para adicao: \n 2 para subtracao: \n 3 para multiplicacao \n 4 para divisao \n 0 para sair\n ");
    scanf("%d", &opcao);

    if(opcao >= 0 && opcao < 5 ){

    printf("\n digite um numero: ");
    scanf("%f", &a);

    printf("\n digite outro numero: ");
    scanf("%f", &b);
    }

    switch(opcao)
    {
        case 1:
            ad = a+b;
                printf("%.2f mais %.2f e igual a %.2f", a, b, ad);
            break;

        case 2:
            sub = a-b;
                printf("%.2f menos %.2f e igual a %.2f", a, b, sub);
            break;

        case 3:
            mul = a*b;
                printf("%.2f vezes %.2f e igual a %.2f", a, b, mul);
            break;

        case 4:
            div = a/b;

                if(b == 0){
                    printf("Nenhum numero e divisivel por 0");
                }
                else{
                    printf("%.2f dividido por %.2f e igual a %.2f", a, b, div);
                }
    
            break;
        default:
            printf("\n Opcao invalida. \n Escolha outra opcao");
    }

    }while(opcao != 0);

 return 0;
}

