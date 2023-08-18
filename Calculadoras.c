#include <stdio.h>

int calculo(float vGas, float vEta)
{
   //preco gasolina * 0.70 = Preco maximo do etanol

   if((vGas * 0.70) < vEta)
   {
      //compensa abastecer com gasolina
      return 0;
   }
   else if((vGas * 0.70) > vEta)
   {
      //compensa abastecer com etanol
      return 1;
   }
   else
   {
      //valores iguais
      return 2;
   }

}

int main()
{   
    int escolha, opcao;
    float a, b, ad, sub, mul, div;
    float pGas, pEta;

    do
    {
        printf("\n ------------Seja Bem Vindo!!!------------");
        printf("\n---------------------------------------------------");
        
        printf("\n Por favor selecione o tipo de calculo deseja realizar: \n 1-Numerico \n 2-Combustivel \n 0-Sair...\n");
        scanf("%d", &escolha);
        
        if(escolha>0 && escolha<3){

            switch(escolha)
            {
                //Calculo Numerico
                case 1:
                    //while(opcao>=5 || opcao<0){
                        printf("\n------------Calculadora Numerica!!!------------");
                        printf("\n---------------------------------------------------");
                        printf("\n digite:\n 1 para adicao: \n 2 para subtracao: \n 3 para multiplicacao \n 4 para divisao \n 0 para sair\n ");
                        scanf("%d", &opcao);
                        printf("\n---------------------------------------------------");
                        if(opcao > 0 && opcao < 5 ){

                            printf("\n digite um numero: ");
                            scanf("%f", &a);

                            printf("\n digite outro numero: ");
                            scanf("%f", &b);

                            printf("---------------------------------------------------");

                            switch(opcao)
                            {
                                case 1:
                                    ad = a+b;
                                        printf("\n%.2f mais %.2f e igual a %.2f", a, b, ad);
                                    break;

                                case 2:
                                    sub = a-b;
                                        printf("\n%.2f menos %.2f e igual a %.2f", a, b, sub);
                                    break;

                                case 3:
                                    mul = a*b;
                                        printf("\n%.2f vezes %.2f e igual a %.2f", a, b, mul);
                                    break;

                                case 4:
                                    div = a/b;

                                        if(b == 0){
                                            printf("\nNenhum numero e divisivel por 0");
                                        }
                                        else{
                                            printf("\n%.2f dividido por %.2f e igual a %.2f", a, b, div);
                                        }
                            
                                    break;
                            }
                        }
                        else if(opcao>=5 || opcao<0)
                        {
                            printf("\n---------------------------------------------------");
                            printf("\n Opcao invalida!!! \n Escolha outra opcao:");
                            printf("\n---------------------------------------------------");
                        //}
                    }
                break;
                //calculo de combustivel
                
                case 2:

                    printf("\n------------Calculo de Combustivel!!!------------");
                    printf("\n-------------------------------------------------");

                        printf("\n Digite o preco da Gasolina:");
                        scanf("%f", &pGas);

                        printf("\n Digite o preco do Etanol:");
                        scanf("%f", &pEta);

                        int resultado = calculo(pGas,pEta);

                        printf("---------------------------------------------------");


                        if(resultado == 0)
                        {
                            printf("\n Compensa abastecer com Gasolina. ");
                        }
                        else if(resultado == 1)
                        {
                            printf("\n Compensa abastecer com Etanol. ");
                        }
                        else
                        {
                            printf("\n Pode abastecer com o que preferir!!! ");
                        }

                        printf("\n---------------------------------------------------");

                        printf("\n Volte sempre!!");
                        
                        printf("\n---------------------------------------------------");
                                            
                break;
            }
        }
        else if(escolha>2 || escolha<0) 
        {
            printf("\n---------------------------------------------------");
            printf("\n Opcao invalida!!! \n Escolha outra opcao:");
            printf("\n---------------------------------------------------");
        }
    }
    while(escolha !=0 );
        return 0;

}