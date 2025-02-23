#include <stdio.h>

//Vai diminuindo a area de busca a cada interação
int busca_bin(int vet[], int tam, int n){
    int ini = 0;
    int fim = tam - 1;
    
    while (ini <= fim){
        int meio = ini + (fim - ini) / 2;
   
        if(n == vet[meio])
            return meio;

        if(n < vet[meio])
            fim = meio - 1;
        else
            ini = meio + 1;
    }
    return -1;
}

int main(){
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 9, 10, 13};
    
    if(busca_bin(vet, 10, 4) == -1){
        printf("Nao encontrado");
    }else{
        printf("Encontrado na posição: %d", busca_bin(vet, 10, 4));
    }

    return 0;
}