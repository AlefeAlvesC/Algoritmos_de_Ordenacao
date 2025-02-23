#include <stdio.h>
#include <stdlib.h>

void radix(int vet[], int tam, int maior){
    int exp = 1;
    while(abs(maior/exp) > 0){
        int count[10] = {0};
        int aux[tam];

        for(int i = 0; i < tam; i++){//Percorre o vetor contando
            int digito = vet[i]/exp;
            digito = digito % 10;

            count[digito]++;
        }

        for(int i = 1; i < 10; i++){//Faz a soma cumultativa
            count[i] = count[i] + count[i-1];
        }

        for(int i = tam-1; i >= 0; i--){//Ordena no vetor auxiliar
            int digito = vet[i] / exp;
            digito = digito % 10;

            count[digito]--;
            aux[count[digito]] = vet[i];
        }

        for(int i = 0; i < tam; i++){//Transfere do vetor auxiliar para o original
            vet[i] = aux[i];
        }
        exp *= 10;
    }
}

int main(){
    int vet[10] = {4, 5, 10, 13, 1, 6, 7, 3, 2, 9};

    radix(vet, 10, 13);

    for(int i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}