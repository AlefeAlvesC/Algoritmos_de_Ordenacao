#include <stdio.h>
#include <stdlib.h>
#include "TAD_Sort.h"

char *nomeArquivoBu(int tam){
    if(tam == 100)
        return "Bubble100.txt";
    else if(tam == 1000)
        return "Bubble1000.txt";
    else if(tam == 1000)
        return "Bubble10000.txt";
    else
        return "Bubble100000.txt";
}


void ordenaBubble(int vet[], int tam){
    int comparacoes = 0;
    int trocas = 0;
    
    int troca;
    for(int i = 0; i < tam - 1; i++){
        troca = 0;
        for(int j = 0; j < tam - i - 1; j++){
            
            comparacoes++;
            if(vet[j] > vet[j+1]){
                int temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
                troca = 1;
                trocas++;
            }
        }
        if(troca == 0)
            break;
    }
    
    printf("Comparacoes Realizadas: %d\n", comparacoes);
    printf("Trocas Realizadas: %d\n", trocas);
}


void lerArquivoBubble(FILE *fp, int tam){
    int *vet = (int*) malloc(tam * sizeof(int));

    for(int i = 0; i < tam; i++){
        fscanf(fp, "%d", &vet[i]);
    }

    ordenaBubble(vet, tam);

    FILE *fpOrd;
    fpOrd = fopen(nomeArquivoBu(tam), "wt");
    escVetor(fpOrd, tam, vet);
    fclose(fpOrd);

    free(vet);
}