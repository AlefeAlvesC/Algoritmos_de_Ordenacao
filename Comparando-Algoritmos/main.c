#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "TAD_Sort.h"

void criaArquivos(){
    FILE* fp;
    //Abrindo arquivos desordenados em modo de Escrita
    printf("\n--- Gerando Arquivos ---\n");
    
    for(int tam = 100; tam <= 100000; tam = tam*10){
        printf("Tamanho do Arquivo: %d\n", tam);
        
        fp = fopen(nomeArquivoDord(tam), "wt");
        escDord(fp, tam);
        fclose(fp);
        
        printf("Arquivo de %d numeros gerado com sucesso!!\n\n", tam);
    }
}

void ordenaArquivos(){
    FILE *fp;

    printf("\n--- Ordenando Arquivos ---\n");

    for(int tam = 100; tam <= 100000; tam = tam * 10){
        printf("\n-----------------------------------");
        printf("\nOrdenando Arquivo de %d Numeros\n", tam);

        //Abrindo arquivo desordenado em modo de Leitura
        printf("\nALGORITMO: Selection Sort\n");
        fp = fopen(nomeArquivoDord(tam), "rt"); 
        lerAquivoSelection(fp, tam);    
        fclose(fp);

        printf("\nALGORITMO: Insertion Sort\n");
        fp = fopen(nomeArquivoDord(tam), "rt");
        lerArquivoInsertion(fp, tam);
        fclose(fp);

        printf("\nALGORITMO: Bubble Sort\n");
        fp = fopen(nomeArquivoDord(tam), "rt");
        lerArquivoBubble(fp, tam);
        fclose(fp);

        printf("\nALGORITMO: Heap Sort\n");
        fp = fopen(nomeArquivoDord(tam), "rt");
        lerArquivoHeap(fp, tam);
        fclose(fp);

        printf("\nALGORITMO: Radix Sort\n");
        fp = fopen(nomeArquivoDord(tam), "rt");
        lerArquivoRadix(fp, tam);
        fclose(fp);

        printf("\nALGORITMO: Quick Sort\n");
        fp = fopen(nomeArquivoDord(tam), "rt");
        lerArquivoQuick(fp, tam);
        fclose(fp);

        printf("\nALGORITMO: Merge Sort\n");
        fp = fopen(nomeArquivoDord(tam), "rt");
        lerArquivoMerge(fp, tam);
        fclose(fp);
    }

}

void buscaAleatoria(){
    FILE *fp, *fp2;//Ponteiro aux para abrir arquivo desordenado

    printf("\n--- Realizando Busca nos Arquivos ---\n");

    for(int tam = 100; tam <= 100000; tam = tam*10){
        printf("\n-----------------------------------");
        printf("\nBuscando em Arquivo de %d Numeros\n", tam);
        
        fp = fopen(nomeArquivoOrd(tam), "rt");
        fp2 = fopen(nomeArquivoDord(tam), "rt");
        lerArquivoBusca(fp, fp2, tam);

        fclose(fp);
        fclose(fp2);
    }
}

void menu(){
    int opc = 1;
    while(1){
        printf("=== PROJETO ===\n"
            "1 - Gerar Arquivos\n"
            "2 - Ordenar Arquivos\n"
            "3 - Busca Aleatoria\n"
            "0 - Sair\n"
            "Opcao: ");
        scanf("%d", &opc);

        if(opc == 1)
            criaArquivos();
        else if(opc == 2)
            ordenaArquivos();
        else if(opc == 3)
            buscaAleatoria();
        else
            break;
        
    }

}

int main(){
    //Inicializando rand
    srand(time(NULL));
    
    //Observe que no primeiro vez rodando o programa, deve-se escolher primeiro a opção 1
    //Somente na primeira vez ou se os arquivos não tiverem sido criados.
    menu();   

    return 0;
}