#include <stdio.h>
#include <stdlib.h>
#include "TAD_Sort.h"

//Ordena um vetor com selection
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

char *nomeArquivoSel(int tam){
    if(tam == 100)
        return "Selection100.txt";
    else if(tam == 1000)
        return "Selection1000.txt";
    else if(tam == 1000)
        return "Selection10000.txt";
    else
        return "Selection100000.txt";
}

void lerAquivoSelection(FILE *fp, int tam){
    //Aloca dinamicamente um vetor
    int *vet = (int*) malloc(tam * sizeof(int));
    
    //Realiza a leitura do arquivo desordenado.
    for(int i = 0; i < tam; i++){
        fscanf(fp, "%d", &vet[i]);
    }

    ordenaSelection(vet, tam);

    //Abre e escreve em um arquivo os números ordenados
    FILE *fpOrd;
    fpOrd = fopen(nomeArquivoSel(tam), "wt");
    escVetor(fpOrd, tam, vet);
    fclose(fpOrd);
    
    free(vet);
}