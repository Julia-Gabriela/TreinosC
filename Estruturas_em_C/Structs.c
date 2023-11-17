#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define n 30

struct Celular{
    char nome[n];
    char marca[n];
    char modelo[n];
    char numeroDeSerie[n];
    double valor;
    int ano;
};
typedef struct Celular Celular;
int main()
{
    //tipo   nomeDaVariavel(Objeto)
    Celular celular1, celular3;
    Celular celular2 = {
         "Victor", 
        "Samsung",
        "S21FE",
        "33343345",
        4660.32,
        2022
    };


    printf("Digite o nome do dono: ");
    scanf("%s", celular3.nome);
     printf("Dono:%s\n", celular3.nome);
    printf("=====================================\n");
    //pede valores para usuario

    
    //vamos criar o celular (jogar valores para o celular);
    celular1 = (Celular){
        "Juh", 
        "Samsung",
        "S20",
        "1212122",
        3560.32,
        2020
    };
    for (int i = 0; i < 2; i++)
    {
        Celular celular;
        if(i == 0){
            celular = celular1;
            strcpy(celular.nome , "nice");
        }
        else{
            celular = celular2;
        }
        printf("Dono:%s\n", celular.nome);
        printf("Marca:%s\n", celular.marca);
        printf("modelo:%s\n", celular.modelo);
        printf("Serie:%s\n", celular.numeroDeSerie);
        printf("Valor:%lf\n", celular.valor);
        printf("Ano:%d\n", celular.ano);
        printf("=====================================\n");
    }
    
    

    return 0;

}