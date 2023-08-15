#include <stdio.h>
int main()
{
  int a, b;
    
    printf("\n digite A: ");
    scanf("%d", &a);

    printf("\n digite B: ");
    scanf("%d", &b);

    if(a==b){
    printf("\n%d e igual a %d", a, b);
    }

    else if(a<b){
    printf("\n%d e menor que %d", a, b);
    }
    else{
    printf("\n%d e maior que %d", a, b);
    }


}