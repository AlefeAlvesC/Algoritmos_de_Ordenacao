#include <stdio.h>
#include <stdlib.h> 
#include "TAD_Sort.h"

int partition(int vet[], int menor, int maior){
    int pivot = vet[maior];
    int i = menor - 1;

    for(int j = menor; j <= maior - 1; j++){

        if(vet[j] < pivot){
            i++;
            int temp = vet[j];
            vet[j] = vet[i];
            vet[i] = temp;
        }
    }

    vet[maior] = vet[i+1];
    vet[i+1] = pivot;

    return i+1;
}

void ordenaQuick(int vet[], int menor, int maior){
    if(menor < maior){
        int pi = partition(vet, menor, maior);

        ordenaQuick(vet, menor, pi-1);
        ordenaQuick(vet, pi+1, maior);
    }
    //printf("Comparacoes Realizadas: %d\n", 0);
    //printf("Trocas Realizadas: %d\n", 0);
}

char *nomeArquivoQk(int tam){
    if(tam == 100)
        return "Quick100.txt";
    else if(tam == 1000)
        return "Quick1000.txt";
    else if(tam == 1000)
        return "Quick10000.txt";
    else
        return "Quick100000.txt";
}

void lerArquivoQuick(FILE *fp, int tam){
    int *vet = (int*) malloc(tam * sizeof(int));

    for(int i = 0; i < tam; i++){
        fscanf(fp, "%d", &vet[i]);
    }

    ordenaQuick(vet, 0, tam-1);

    FILE *fpOrd;
    fpOrd = fopen(nomeArquivoQk(tam), "wt");
    escVetor(fpOrd, tam, vet);
    fclose(fpOrd);

    free(vet);
}