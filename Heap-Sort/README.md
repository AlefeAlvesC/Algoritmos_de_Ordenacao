# Heap Sort
Heap sort é uma técnica de ordenação baseada em comparação baseada na Binary Heap Data Structure. Pode ser vista como uma otimização sobre a select sort, onde primeiro
encontramos o elemento máximo (ou mínimo) e o trocamos com o último (ou primeiro). Repetimos o mesmo processo para os elementos restantes. No Heap Sort, usamos o Binary Heap
para que possamos encontrar e mover rapidamente o elemento máximo em O(Log n) em vez de O(n) e, portanto, atingir a complexidade de tempo O(n Log n).
## Funcionamento:
- Reorganize os elementos do array para que eles formem um Max Heap.
- Repita os seguintes passos até que o heap contenha apenas um elemento:
- Troque o elemento raiz do heap (que é o maior elemento do heap atual) pelo último elemento do heap.
- Remova o último elemento do heap (que agora está na posição correta). Reduzimos principalmente o tamanho do heap e não removemos o elemento do array real.
- Empilhe os elementos restantes do heap.
- Finalmente obtemos uma matriz ordenada.
## Vantagens: 
- Complexidade de Tempo Eficiente: Heap Sort tem uma complexidade de tempo de O(n log n) em todos os casos. Isso o torna eficiente para classificar grandes conjuntos de dados. O fator log n vem da altura do heap binário e garante que o algoritmo mantenha um bom desempenho mesmo com um grande número de elementos.
- Uso de memória: O uso de memória pode ser mínimo (escrevendo um heapify() iterativo em vez de um recursivo). Então, além do que é necessário para manter a lista inicial de itens a serem classificados, ele não precisa de espaço de memória adicional para funcionar
- Simplicidade: É mais simples de entender do que outros algoritmos de classificação igualmente eficientes porque não usa conceitos avançados de ciência da computação, como recursão.
## Desvantagens:
- Custoso : a classificação por heap é custosa, pois as constantes são maiores em comparação à classificação por mesclagem, mesmo que a complexidade de tempo seja O(n Log n) para ambas.
- Instável : Heap sort é instável. Pode reorganizar a ordem relativa.
- Ineficiente: Heap Sort não é muito eficiente devido às altas constantes na complexidade de tempo.
