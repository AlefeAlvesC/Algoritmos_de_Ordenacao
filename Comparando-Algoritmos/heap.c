#include <stdio.h>
#include <stdlib.h>
#include "TAD_Sort.h"

//Variaveis global para realizar contagem de comparações
int comparH = 0;
//Variaveis global para realizar contagem de trocas
int trocasH = 0;

void heapify(int vet[], int tam, int pai){
    
    int maior = pai;

    int esq = 2 * pai + 1;
    int dir = 2 * pai + 2;

    if(esq < tam)
        comparH++;
    if(esq < tam && vet[esq] > vet[maior])
        maior = esq;

    if(dir < tam)
        comparH++;
    if(dir < tam && vet[dir] > vet[maior])
        maior = dir;
    
    if(maior != pai){
        int temp = vet[pai];
        vet[pai] = vet[maior];
        vet[maior] = temp;
        trocasH++;

        heapify(vet, tam, maior);
    }
}

//Função para realizar ordenação com Heap Sort
void ordenaHeap(int vet[], int tam){

    for(int i = tam/2 - 1; i >= 0; i--){
        heapify(vet, tam, i);
    }

    for(int i = tam - 1; i > 0; i--){
        int temp = vet[0];
        vet[0] = vet[i];
        vet[i] = temp;

        trocasH++;
        heapify(vet, i, 0);
    }
    
    printf("Comparacoes Realizadas: %d\n", comparH);
    printf("Trocas Realizadas: %d\n", trocasH);
}

void lerArquivoHeap(FILE *fp, int tam){
    int *vet = (int*) malloc(tam * sizeof(int));

    for(int i = 0; i < tam; i++){
        fscanf(fp, "%d", &vet[i]);
    }

    ordenaHeap(vet, tam);

    FILE *fpOrd;
    fpOrd = fopen(nomeArquivoOrd(tam), "wt");
    escVetor(fpOrd, tam, vet);
    fclose(fpOrd);

    free(vet);
}