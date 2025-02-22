#include <stdio.h>
#include <stdlib.h>
#include "TAD_Sort.h"

//Função para realizar ordenação com Radix Sort 
void ordenaRadix(int vet[], int tam, int maior){
    int exp = 1;
    
    while(abs(maior/exp) > 0){
        int contador[10] = {0};
        int aux[tam];

        for(int i = 0; i < tam; i++){
            int digito = (vet[i]/exp) % 10;

            contador[digito]++;
        }

        for(int i = 1; i < 10; i++){
            contador[i] = contador[i] + contador[i - 1];
        }

        for(int i = tam - 1; i >= 0; i--){
            int digito = (vet[i]/exp) % 10;

            contador[digito]--;
            aux[contador[digito]] = vet[i];
        }

        for(int i = 0; i < tam; i++){
            vet[i] = aux[i];
        }
        exp *= 10;
    }
}

void lerArquivoRadix(FILE *fp, int tam){
    int *vet = (int*) malloc(tam * sizeof(int));
    
    for(int i = 0; i < tam; i++){
        fscanf(fp, "%d", &vet[i]);
    }

    ordenaRadix(vet, tam, 32000);

    FILE *fpOrd;
    fpOrd = fopen(nomeArquivoOrd(tam), "wt");
    escVetor(fpOrd, tam, vet);
    fclose(fpOrd);

    free(vet);
}