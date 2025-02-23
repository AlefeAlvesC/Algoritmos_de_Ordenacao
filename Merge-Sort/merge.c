#include <stdio.h>

void merge(int vet[], int esq, int meio, int dir){
    int i, j, k;//Index auxiliares

    int n1 = meio - esq + 1;//Tamanho da primeira metade do array
    int n2 = dir - meio;//Tamanho da segunda
    int ESQ[n1], DIR[n2];//Cria dos arrays temporarios do tamanho do vetor
    
    for(i = 0; i < n1; i++){//Salva as informaçoes da primeira metade
        ESQ[i] = vet[esq + i];
    }
    for(j = 0; j < n2; j++){//Salva as informações da segunda metade
        DIR[j] = vet[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = esq;
    
    while(i < n1 && j < n2){//Mescla os 2 arrays temporarios no array principal
        if(ESQ[i] <= DIR[j]){
            vet[k] = ESQ[i];
            i++;
        }else{
            vet[k] = DIR[j];
            j++;
        }
        k++;
    }
    
    while (i < n1){//Salva as informações restantes
        vet[k] = ESQ[i];
        i++;
        k++;
    }
    
    while (j < n2){//Salva as informações restantes
        vet[k] = DIR[j];
        j++;
        k++; 
    }   
}

void mergeSort(int vet[], int esq, int dir){
    int meio = esq + (dir - esq)/ 2;
    
    if(esq < dir){//Divide o vetor até resta apenas 1 item
        mergeSort(vet, esq, meio);
        mergeSort(vet, meio + 1, dir);
    
        merge(vet, esq, meio, dir);//Mescla cada subvetor auxiliar
    }
}

int main(){
    int vet[10] = {4, 5, 10, 13, 1, 6, 7, 3, 2, 9};

    mergeSort(vet, 0, 10-1);

    for(int i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}