#include <stdio.h>
#include <stdlib.h> 
#include "TAD_Sort.h"

//Variaveis global para realizar contagem de comparações
int comparQ = 0;
//Variaveis global para realizar contagem de trocas
int trocasQ = 0;

int partition(int vet[], int menor, int maior){
    int pivot = vet[maior];
    int i = menor - 1;

    for(int j = menor; j <= maior - 1; j++){
        comparQ++;
        if(vet[j] < pivot){
            i++;
            int temp = vet[j];
            vet[j] = vet[i];
            vet[i] = temp;
            trocasQ++;
        }
    }

    vet[maior] = vet[i+1];
    vet[i+1] = pivot;
    trocasQ++;
    return i+1;
}

//Função para realizar ordenação com Quick Sort
void ordenaQuick(int vet[], int menor, int maior){
    if(menor < maior){
        int pi = partition(vet, menor, maior);

        ordenaQuick(vet, menor, pi-1);
        ordenaQuick(vet, pi+1, maior);
    } 
}

void lerArquivoQuick(FILE *fp, int tam){
    int *vet = (int*) malloc(tam * sizeof(int));

    for(int i = 0; i < tam; i++){
        fscanf(fp, "%d", &vet[i]);
    }

    ordenaQuick(vet, 0, tam-1);
    printf("Comparacoes Realizadas: %d\n", comparQ);
    printf("Trocas Realizadas: %d\n", trocasQ);

    FILE *fpOrd;
    fpOrd = fopen(nomeArquivoOrd(tam), "wt");
    escVetor(fpOrd, tam, vet);
    fclose(fpOrd);

    free(vet);
}