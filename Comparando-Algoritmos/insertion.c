#include <stdio.h>
#include <stdlib.h>
#include "TAD_Sort.h"

//Função para realizar ordenação com Insertion Sort
void ordenaInsertion(int vet[], int tam){
    long long comparacoes = 0;
    long long trocas = 0;
    
    for(int i = 1; i < tam; i++){
        int key = vet[i];
        int j = i - 1;

        while(j >= 0 && vet[j] > key){
            comparacoes++;
            trocas++;
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j+1] = key;
        
        if(j >= 0)
            comparacoes++;
        trocas++;
    }

    printf("Comparacoes Realizadas: %lld\n", comparacoes);
    printf("Trocas Realizadas: %lld\n", trocas);
}

void lerArquivoInsertion(FILE *fp, int tam){
    //Cria um vetor dinamincamente do tamanho de números presente no arquivo.
    int *vet = (int*) malloc(tam * sizeof(int));

    //Ler os números não ordenados do arquivo e adiciona no vetor.
    for(int i = 0; i < tam; i++){
        fscanf(fp, "%d", &vet[i]);
    }
    
    double ini = tempo_atual();
    ordenaInsertion(vet, tam);
    double fim = tempo_atual();
    printf("Tempo: %.3f\n", fim-ini);
    
    
    //Abre e escreve em um arquivos os numeros ordenados.
    FILE *fpOrd;
    fpOrd = fopen(nomeArquivoOrd(tam), "wt");
    escVetor(fpOrd, tam, vet);
    fclose(fpOrd);

    free(vet);
}