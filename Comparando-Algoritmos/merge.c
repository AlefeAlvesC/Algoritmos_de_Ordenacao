#include <stdio.h>
#include <stdlib.h>
#include "TAD_Sort.h"

//Variaveis global para realizar contagem de trocas e comparações
int comparM = 0;
//Variaveis global para realizar contagem de comparações
int trocasM = 0;

void merge(int vet[], int esq, int meio, int dir){
    int i, j, k;
    int n1 = meio - esq + 1;
    int n2 = dir - meio;

    int ESQ[n1], DIR[n2];

    for(i = 0; i < n1; i++){
        ESQ[i] = vet[esq + i];
    }
    for(j = 0; j < n2; j++){
        DIR[j] = vet[meio + j + 1];
    }

    i = 0;
    j = 0;
    k = esq;

    while(i < n1 && j < n2){
        comparM++;
        if(ESQ[i] <= DIR[j]){
            vet[k] = ESQ[i];
            i++;
        }else{
            vet[k] = DIR[j];
            j++;
        }
        trocasM++;
        k++;
    }

    while(i < n1){
        vet[k] = ESQ[i];
        i++;
        k++;
        trocasM++;
    }

    while(j < n2){
        vet[k] = DIR[j];
        j++;
        k++;
        trocasM++;
    }
}

//Função para realizar ordenação com Merge Sort
void ordenaMerge(int vet[], int esq, int dir){
    if(esq < dir){
        int meio = esq + (dir - esq) / 2;

        ordenaMerge(vet, esq, meio);
        ordenaMerge(vet, meio + 1, dir);

        merge(vet, esq, meio, dir);
    }
}

void lerArquivoMerge(FILE *fp, int tam){
    int *vet = (int*) malloc(tam * sizeof(int));

    for(int i = 0; i < tam; i++){
        fscanf(fp, "%d", &vet[i]);
    }
    double ini = tempo_atual();
    ordenaMerge(vet, 0, tam-1);
    double fim = tempo_atual();
    

    printf("Comparacoes Realizadas: %d\n", comparM);
    printf("Trocas Realizadas: %d\n", trocasM);
    printf("Tempo: %.3f\n", fim-ini);
    
    
    FILE *fpOrd;
    fpOrd = fopen(nomeArquivoOrd(tam), "wt");
    escVetor(fpOrd, tam, vet);
    fclose(fpOrd);

    free(vet);
}