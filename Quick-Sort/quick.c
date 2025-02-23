#include <stdio.h>

int partition(int vet[], int menor, int maior){
    int pivot = vet[maior];
    int i = menor - 1;

    for(int j = menor; j <= maior - 1; j++){
        if(vet[j] < pivot){
            i++;
            
            int temp = vet[i];
            vet[i] = vet[j];
            vet[j] = temp;
        }
    }

    vet[maior] = vet[i+1];
    vet[i+1] = pivot;

    return i + 1;
}

void quick(int vet[], int menor, int maior){
    if(menor < maior){
        int pi = partition(vet, menor, maior);

        quick(vet, menor, pi-1);
        quick(vet, pi+1, maior);
    }
}

int main(){
    int vet[10] = {4, 5, 10, 13, 1, 6, 7, 3, 2, 9};

    quick(vet, 0, 10-1);

    for(int i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}