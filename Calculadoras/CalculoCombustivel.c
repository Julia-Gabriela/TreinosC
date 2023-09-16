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

int main ()
{
   printf("\n ------------Seja Bem Vindo!!!------------");

   printf("\n ----------------CalGas!!!----------------");

   float precoGas, precoEtanol;

      printf("\n Digite o preco da Gasolina:");
      scanf("%f", &precoGas);

      printf("\n Digite o preco do Etanol:");
      scanf("%f", &precoEtanol);

   int resultado = calculo(precoGas,precoEtanol);

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

   return 0;

}