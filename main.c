#include "src/inflacao.h"


int main(){

    int ano[2];

    printf("Digite o ano inicial: ");
    scanf("%d", &ano[0]);
    printf("Digite o ano final: ");
    scanf("%d", &ano[1]);

    readfile();


    printf("%f\n", calculateInflation(ano[0], ano[1]));
}