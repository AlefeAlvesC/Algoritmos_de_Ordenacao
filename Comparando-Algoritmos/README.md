# Sistema de Ordenação
Implementação de um pequeno sistema em C que cria 4 arquivos com números desordenados e aplica a ordenação com bases nos algoritmos estudados que são:
- Selection Sort
- Insertion Sort
- Bubble Sort
- Heap Sort
- Radix Sort
- Quick Sort
- Merge Sort.

Os 4 arquivos a serem criados são respectivamente um com 100, 1000, 10000 e 100000 números desordenados, que como já dito serão ordenados com base nos algoritmos  já vistos afim
avaliarmos os desempenhos destes. Devemos avaliar cada algoritmo com base em tempo de processamento, quantidade de trocas e quantidade de comparações.

### Para testa o sistema, abra um terminal e vá para o caminho da pasta que contém os arquivos, aplique os seguintes comandos:
- gcc main.c selection.c insertion.c bubble.c heap.c radix.c quick.c merge.c busca.c funcoesGerais.c -o prog
- ./prog.exe

OBS: Na primeira execução do programa é importante primeiro criar os aruqivos para depois testar a ordenação e busca.
