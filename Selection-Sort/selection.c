#include <stdio.h>
//Paramentros: ponteiro para o array e tamanho do array
void selection(int vet[], int tam){
    
    //Percorre o array até o penúltimo elemento
    for(int i = 0; i < tam-1; i++){
        int idx_min = i;
        
        //For para verificar qual o menor elemento não ordenado no array
        for(int j = i+1; j < tam; j++){    
            if(vet[idx_min] > vet[j])
                idx_min = j;
        }

        //Realiza a troca entre os elementos
        int temp = vet[idx_min];
        vet[idx_min] = vet[i];
        vet[i] = temp;
    }
}

int main(){
    int vet[10] = {4, 5, 10, 13, 1, 6, 7, 3, 2, 9};

    selection(vet, 10);

    for(int i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
