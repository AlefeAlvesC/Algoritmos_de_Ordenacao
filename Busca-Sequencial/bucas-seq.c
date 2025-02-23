#include <stdio.h>

//Percorre o vetor item a item até encontrar
int busca_seq(int vet[], int tam, int n){
    for(int i = 0; i < tam; i++){
        if(vet[i] == n)
            return i;
    }
    return -1;
}

int main(){
    int vet[10] = {4, 5, 10, 13, 1, 6, 7, 3, 2, 9};
    
    if(busca_seq(vet, 10, 4) == -1){
        printf("Nao encontrado");
    }else{
        printf("Encontrado na posição: %d", busca_seq(vet, 10, 4));
    }
    
    return 0;
}