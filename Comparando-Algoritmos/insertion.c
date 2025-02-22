#include <stdio.h>
#include <stdlib.h>
#include "TAD_Sort.h"

void ordenaInsertion(int vet[], int tam){
    int comparacoes = 0;
    int trocas = 0;
    
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

    printf("Comparacoes Realizadas: %d\n", comparacoes);
    printf("Trocas Realizadas: %d\n", trocas);
}

char *nomeArquivoIns(int tam){
    if(tam == 100)
        return "Insertion100.txt";
    else if(tam == 1000)
        return "Insertion1000.txt";
    else if(tam == 1000)
        return "Insertion10000.txt";
    else
        return "Insertion100000.txt";
}

void lerArquivoInsertion(FILE *fp, int tam){
    //Cria um vetor dinamincamente do tamanho de números presente no arquivo.
    int *vet = (int*) malloc(tam * sizeof(int));

    //Ler os números não ordenados do arquivo e adiciona no vetor.
    for(int i = 0; i < tam; i++){
        fscanf(fp, "%d", &vet[i]);
    }

    ordenaInsertion(vet, tam);

    //Abre e escreve em um arquivos os numeros ordenados.
    FILE *fpOrd;
    fpOrd = fopen(nomeArquivoIns(tam), "wt");
    escVetor(fpOrd, tam, vet);
    fclose(fpOrd);

    free(vet);
}