#include <stdio.h>
#include <stdlib.h>
#include "TAD_Sort.h"

//Função para realizar ordenação com Bubble Sort
void ordenaBubble(int vet[], int tam){
    int comparacoes = 0;
    long long trocas = 0;
    
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
    printf("Trocas Realizadas: %lld\n", trocas);
}


void lerArquivoBubble(FILE *fp, int tam){
    //Aloca dinamincamente um vetor do tamanho do arquivo
    int *vet = (int*) malloc(tam * sizeof(int));

    //Ler os números do arquivo e salva no vetor
    for(int i = 0; i < tam; i++){
        fscanf(fp, "%d", &vet[i]);
    }

    //Ordena o vetor e conta as comparações, torcas e tempo.
    double ini = tempo_atual();
    ordenaBubble(vet, tam);
    double fim = tempo_atual();
    printf("Tempo: %.3f\n", fim-ini);
    
    //Abre um arquivo e escreve o vetor ordenado.
    FILE *fpOrd;
    fpOrd = fopen(nomeArquivoOrd(tam), "wt");
    escVetor(fpOrd, tam, vet);
    fclose(fpOrd);

    free(vet);
}