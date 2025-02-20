#include <stdio.h>

void insertion(int vet[], int tam){
    for(int i = 1; i < tam; i++){//For para selecionar a chave da vez
        int key = vet[i];//Salva a chave
        int j = i - 1;//Index auxiliar para percorrer o array de trás para frente

        while(j >= 0 && vet[j] > key){//Começando da posição anterior a chave, compara os elementos até encontrar um menor que a chave
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1] = key;//Realiza a troca
    }
}

int main(){
    int vet[10] = {4, 5, 10, 13, 1, 6, 7, 3, 2, 9};
    //Necessita do endereço do array e do tamanho deste
    insertion(vet, 10);

    for(int i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}
