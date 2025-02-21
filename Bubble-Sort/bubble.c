#include <stdio.h>

//Parametros: Ponteiro para o vetor e tamanho do vetor
void bubble(int vet[], int tam){
    for(int i = 0; i < tam-1; i++){//for para contagens de elementos já ordenados
        int troca = 0;
        for(int j = 0; j < tam - i - 1; j++){//Percorre o vetor
            if(vet[j] > vet[j+1]){//Faz troca entre elementos caso não estejam em posições corretas
                int temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
                troca = 1;
            }
        }
        if(troca == 0)//Caso não houver trocas, o vetor esta ordenado e finaliza
            break;
    }
}

int main(){
    int vet[10] = {4, 5, 10, 13, 1, 6, 7, 3, 2, 9};

    bubble(vet, 10);

    for(int i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
