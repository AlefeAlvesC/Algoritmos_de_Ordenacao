# Merge Sort
Merge sort é um algoritmo de ordenação que segue a abordagem de dividir e conquistar. Ele funciona dividindo recursivamente o array de entrada em subarrays menores e ordenando esses subarrays e, em seguida, mesclando-os novamente para obter o array ordenado.
Pode-se dizer então que o processo de merge sort é dividir o array em duas metades, ordenar cada metade e, então, mesclar as metades ordenadas novamente. Esse processo é repetido até que o array inteiro esteja ordenado.

## Funcionamento:
- Divide-se a lista ou matriz recursivamente em duas metades até que não possa mais ser dividida.
- Cada submatriz é ordenada individualmente usando o algoritmo de ordenação por mesclagem.
- Os subarrays ordenados são mesclados novamente em ordem classificada. O processo continua até que todos os elementos de ambos os subarrays tenham sido mesclados.

## Vantagens:
- A ordenação por mesclagem é um algoritmo de ordenação estável, o que significa que ele mantém a ordem relativa de elementos iguais na matriz de entrada.
- A ordenação por mesclagem tem uma complexidade de tempo no pior caso de O(N logN) , o que significa que ela tem um bom desempenho mesmo em grandes conjuntos de dados.
- A abordagem de dividir para conquistar é direta.
## Desvantagens:
- A classificação por mesclagem requer memória adicional para armazenar as submatrizes mescladas durante o processo de classificação.
- Não é um algoritmo de classificação no local, o que significa que ele requer memória adicional para armazenar os dados classificados. Isso pode ser uma desvantagem em aplicativos em que o uso de memória é uma preocupação.
- O Merge Sort é mais lento que o QuickSort em geral, pois o QuickSort é mais amigável ao cache porque funciona no local.
