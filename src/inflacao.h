#ifndef INFLACAO_H
#define INFLACAO_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>




void readfile();


float calculateInflation(int anoInicial, int anoFinal);

float calculaPreco(float preco, int anoInicial, int anoFinal);

#endif