#include <stdio.h>
#include <stdlib.h>
#include "TAD_Sort.h"

//Função para realizar ordenação com Selection Sort
void ordenaSelection(int vet[], int tam){
    int comparacoes = 0;
    int trocas = 0;
    for(int i = 0; i < tam; i++){
        int menor = i;

        for(int j = i + 1; j < tam; j++){
            comparacoes++;
            if(vet[menor] > vet[j])
                menor = j;
        }

        trocas++;
        int temp = vet[i];
        vet[i] = vet[menor];
        vet[menor] = temp;
    }
    printf("Comparacoes Realizadas: %d\n", comparacoes);
    printf("Trocas Realizadas: %d\n", trocas);
}

void lerAquivoSelection(FILE *fp, int tam){
    //Aloca dinamicamente um vetor
    int *vet = (int*) malloc(tam * sizeof(int));
    
    //Realiza a leitura do arquivo desordenado armazenando em um vetor.
    for(int i = 0; i < tam; i++){
        fscanf(fp, "%d", &vet[i]);
    }
    
    //Ordena o vetor contando comparações e trocas e o tempo
    double ini = tempo_atual();
    ordenaSelection(vet, tam);
    double fim = tempo_atual();
    printf("Tempo: %.3f\n", fim-ini);


    //Abre e escreve em um arquivo os números ordenados do vetor.
    FILE *fpOrd;
    fpOrd = fopen(nomeArquivoOrd(tam), "wt");
    escVetor(fpOrd, tam, vet);
    fclose(fpOrd);
    
    free(vet);
}