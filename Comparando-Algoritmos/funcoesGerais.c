#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "TAD_Sort.h"

//Funções para arquivos desordenados

char *nomeArquivoDord(int tam){
    if(tam == 100)
        return "arquivo100.txt";
    else if(tam == 1000)
        return "arquivo1000.txt";
    else if(tam == 10000)
        return "arquivo10000.txt";
    else
        return "arquivo100000.txt";
}

void escDord(FILE *fp, int tam){
    for(int i = 0; i < tam; i++){
        if(i == 0)
            fprintf(fp, "%d", rand());
        else if(i % 10 == 0)
            fprintf(fp, "\n%d", rand());
        else
            fprintf(fp, " %d", rand());
    }
}

//Funções para arquivos ordenados

char *nomeArquivoOrd(int tam){
    if(tam == 100)
        return "ordenado100.txt";
    else if(tam == 1000)
        return "ordenado1000.txt";
    else if(tam == 10000)
        return "ordenado10000.txt";
    else
        return "ordenado100000.txt";
}

void escVetor(FILE *fp, int tam, int vet[]){
    for(int i = 0; i < tam; i++){
        if(i == 0)
            fprintf(fp, "%d", vet[i]);
        else if(i % 10 == 0)
            fprintf(fp, "\n%d", vet[i]);
        else
            fprintf(fp, " %d", vet[i]);
    }
}

//Código para contagem de tempo pego do gpt
double tempo_atual() {
    LARGE_INTEGER freq, counter;
    QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&counter);
    return (double)counter.QuadPart / freq.QuadPart;
}