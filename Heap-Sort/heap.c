#include <stdio.h>

//Construtor
void heapify(int vet[], int tam, int i){
    int maior = i;

    int l = i * 2 + 1;
    int r = i * 2 + 2;

    if(l < tam && vet[l] > vet[maior]){
        maior = l;
    }

    if(r < tam && vet[r] > vet[maior]){
        maior = r;
    }

    if(maior != i){
        int temp = vet[i];
        vet[i] = vet[maior];
        vet[maior] = temp;
        heapify(vet, tam, maior);
    }
}


void heap(int vet[], int tam){
    for(int i = tam / 2 - 1; i >= 0; i--){//Heapificando o vetor
        heapify(vet, tam, i);
    }

    for(int i = tam - 1; i > 0; i--){//De fato ordenando
        int temp = vet[0];
        vet[0] = vet[i];
        vet[i] = temp;

        heapify(vet, i, 0);
    }
     
}

int main(){
    int vet[10] = {4, 5, 10, 13, 1, 6, 7, 3, 2, 9};

    heap(vet, 10);

    for(int i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}