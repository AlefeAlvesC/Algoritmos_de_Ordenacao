#include <stdio.h>
#include <stdlib.h>
#include "TAD_Sort.h"

//Busca sequencial por um número aleatorio em um vetor.
int buscaSeq(int vet[], int tam, int num){
    for(int i = 0; i < tam; i++)
        if(vet[i] == num)
            return i;

    return -1;
}

//Busca binaria por um número aleatorio em um vetor.
int buscaBin(int vet[], int tam, int num){
    int ini = 0;
    int fim = tam - 1;


    while(ini <= fim){
        int meio = ini + (fim-ini)/2;
        if(vet[meio] == num)
            return meio;
        
        if(vet[meio] < num)
            ini = meio + 1;
        else
            fim = meio - 1;
    }
    return -1;    
}


void lerArquivoBusca(FILE *fpO, FILE *fpD,  int tam){
    //Aloca dinamicamente espaço para dois vetores de tamanho tam
    int *vetO = (int*) malloc(tam * sizeof(int));
    int *vetD = (int*) malloc(tam * sizeof(int));

    //Ler de dois arquivos e salva em 2 vetores. O primeiro arquivo é o ordenado e o segundo o desor
    for(int i = 0; i < tam; i++){
        fscanf(fpO, "%d", &vetO[i]);
        fscanf(fpD, "%d", &vetD[i]);
    }

    int aleat = rand();//Sorteia um número
    
    //Realiza a busca sequencial e conta o tempo.
    printf("\nBusca Sequencial\n");
    double ini = tempo_atual();
    int pos = buscaSeq(vetD, tam, aleat);
    double fim = tempo_atual();
    
    if(pos != -1){
        printf("O numero %d foi encontrado na posicao %d.\n", aleat, pos);
    }else{
        printf("O numero %d nao foi encontrado.\n", aleat);
    }
    printf("Tempo da busca: %.7f\n", fim-ini);
    free(vetD);

    //Realiza a busca binaria e conta o tempo.
    printf("\nBusca Binaria\n");
    ini = tempo_atual();
    pos = buscaBin(vetO, tam, aleat);
    fim = tempo_atual();

    if(pos != -1){
        printf("O numero %d foi encontrado na posicao %d.\n", aleat, pos);
    }else{
        printf("O numero %d nao foi encontrado.\n", aleat);
    }

    printf("Tempo da busca: %.7f\n", fim-ini);
    free(vetO);
}