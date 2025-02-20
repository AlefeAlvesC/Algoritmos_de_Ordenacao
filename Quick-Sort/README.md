# Quick Sort
QuickSort é um algoritmo de ordenação baseado em Dividir e Conquistar que escolhe um elemento como pivô e particiona o array fornecido em torno do pivô escolhido, colocando o pivô em sua posição correta no array classificado.

## Funcionamento: 
- Escolha um Pivot: Selecione um elemento da matriz como o pivô. A escolha do pivô pode variar (por exemplo, primeiro elemento, último elemento, elemento aleatório ou mediana).
- Particionar o Array: Reorganize o array ao redor do pivô. Após o particionamento, todos os elementos menores que o pivô estarão à sua esquerda, e todos os elementos maiores que o pivô estarão à sua direita. O pivô estará então em sua posição correta, e obtemos o índice do pivô.
- Chamada recursiva: aplique recursivamente o mesmo processo aos dois subarrays particionados (esquerda e direita do pivô).
- Caso base: a recursão para quando resta apenas um elemento na submatriz, pois um único elemento já está classificado.
## Vantagens:
- É um algoritmo de dividir para conquistar que facilita a resolução de problemas.
- É eficiente em grandes conjuntos de dados.
- Ele tem uma sobrecarga baixa, pois requer apenas uma pequena quantidade de memória para funcionar.
- Algoritmo de uso geral mais rápido para grandes volumes de dados quando a estabilidade não é necessária.
## Desvantagens:
- Ele tem uma complexidade de tempo de pior caso de O(n^2 ), que ocorre quando o pivô é escolhido incorretamente.
- Não é uma boa escolha para pequenos conjuntos de dados.
- Não é uma ordenação estável, o que significa que se dois elementos tiverem a mesma chave, sua ordem relativa não será preservada.
