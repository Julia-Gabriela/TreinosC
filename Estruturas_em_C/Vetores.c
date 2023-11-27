#include <stdio.h>

int main()
{

    int nota[4];//array/vetor
    int i;
    double media;

    for (i = 0; i < 4; i++)
    {
        printf("Digite a nota %d:", i + 1);
        scanf("%d", &nota[i]);
    }

        media =(nota[0] + nota[1] + nota[2] + nota[3])/4;
        
        printf("Media das notas igual a %.2lf", media);
}