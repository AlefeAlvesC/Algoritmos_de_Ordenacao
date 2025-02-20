# Bubble Sort
A ordenação por bolhas é um algoritmo de classificação que compara dois elementos adjacentes e os troca até que estejam na ordem pretendida. Assim como o movimento das bolhas
de ar na água que sobem até a superfície, cada elemento do array se move para o final em cada iteração. Por isso o nome bubble sort.

## Funcionamento:
- Ordenamos o array usando múltiplas passagens. Após a primeira passagem, o elemento máximo vai para o final (sua posição correta). Da mesma forma, após a segunda passagem, o segundo maior elemento vai para a penúltima posição e assim por diante.
- Em cada passagem, processamos apenas aqueles elementos que ainda não foram movidos para a posição correta. Após k passagens, os maiores k elementos devem ter sido movidos para as últimas k posições.

## Vantagens:
- O Bubble Sort é fácil de entender e implementar.
- Não requer nenhum espaço de memória adicional.
- É um algoritmo de ordenação estável.
## Desvantagens:
- A ordenação por bolhas tem uma complexidade de tempo de O(n^2), o que a torna muito lenta para grandes conjuntos de dados.
- O bubble sort tem quase nenhuma ou limitada aplicação no mundo real. É usado principalmente em ambientes acadêmicos para ensinar diferentes maneiras de classificação.
