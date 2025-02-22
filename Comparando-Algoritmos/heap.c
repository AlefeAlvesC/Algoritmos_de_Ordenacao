#include <stdio.h>
#include <stdlib.h>
#include "TAD_Sort.h"

void heapify(int vet[], int tam, int pai){
    
    int maior = pai;

    int esq = 2 * pai + 1;
    int dir = 2 * pai + 2;

    if(esq < tam && vet[esq] > vet[maior])
        maior = esq;

    if(dir < tam && vet[dir] > vet[maior])
        maior = dir;
    
    if(maior != pai){
        int temp = vet[pai];
        vet[pai] = vet[maior];
        vet[maior] = temp;

        heapify(vet, tam, maior);
    }
}

void ordenaHeap(int vet[], int tam){


    for(int i = tam/2 - 1; i >= 0; i--){
        heapify(vet, tam, i);
    }

    for(int i = tam - 1; i > 0; i--){
        int temp = vet[0];
        vet[0] = vet[i];
        vet[i] = temp;

        heapify(vet, i, 0);
    }
    
    printf("Comparacoes Realizadas: %d\n", 0);
    printf("Trocas Realizadas: %d\n", 0);
}


char *nomeArquivoHp(int tam){
    if(tam == 100)
        return "Heap100.txt";
    else if(tam == 1000)
        return "Heap1000.txt";
    else if(tam == 1000)
        return "Heap10000.txt";
    else
        return "Heap100000.txt";
}

void lerArquivoHeap(FILE *fp, int tam){
    int *vet = (int*) malloc(tam * sizeof(int));

    for(int i = 0; i < tam; i++){
        fscanf(fp, "%d", &vet[i]);
    }

    ordenaHeap(vet, tam);

    FILE *fpOrd;
    fpOrd = fopen(nomeArquivoHp(tam), "wt");
    escVetor(fpOrd, tam, vet);
    fclose(fpOrd);

    free(vet);
}