#include "inflacao.h"

float maxData[2023];


void readfile() {
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("data.txt", "r");
    if (fp == NULL)
        exit(0);

    while ((read = getline(&line, &len, fp)) != -1) {
        char *token = strtok(line, ";");
        int ano = atoi(token);

        token = strtok(NULL, ";");
        float valor = atof(token);

        maxData[ano] = valor;

    }


    printf("%f\n", maxData[2012]);
    printf("\n");
    fclose(fp);
    if (line)
        free(line);
}