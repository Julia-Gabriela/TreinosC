#include <stdio.h>
int main()
{
/*
    Estrutura SWITCH_CASE
    Switch (variavel)
    {
        case 1 :
            Acoes desejadas;
            break;
        Default: // serve para recusar opcoes diferentes das cases
            printf("opcao invalida");
            break;
    }
*/

    int num;

    printf("Digite o dia da semana:\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1 :
        printf("Domingo");
        break;
    case 2 :
        printf("Segunda");
        break;
    case 3 :
        printf("Terca");
        break;
    case 4 :
        printf("Quarta");
        break;
    case 5 :
        printf("Quinta");
        break;
    case 6 :
        printf("Sexta");
        break;
    case 7 :
        printf("Sabado");
        break;
    default:
        printf("Numero invalido\n");
        break;
    }
    return 0;
}