#include "src/inflacao.h"


int main(){

    int ano[2];

    printf("Digite o ano inicial: ");
    scanf("%d", &ano[0]);
    printf("Digite o ano final: ");
    scanf("%d", &ano[1]);


    printf("Digite o preco: ");
    float preco;
    scanf("%f", &preco);


    readfile();

    printf("Preco Final: %f\n",calculaPreco(preco, ano[1], ano[0]));

    //printf("%f\n", calculateInflation(ano[0], ano[1]));
}