# Insertion Sort
A ordenação por inserção é um algoritmo de ordenação que coloca um elemento não ordenado em seu lugar adequado em cada iteração. A ordenação por inserção funciona de forma
semelhante à ordenação de cartas em nossa mão em um jogo de cartas. Você divide as cartas em dois grupos: as cartas classificadas e as cartas não classificadas. Então, você
escolhe uma carta do grupo não classificado e a coloca no lugar certo no grupo classificado.

## Funcionamento:
- Começamos com o segundo elemento da matriz, pois o primeiro elemento da matriz é considerado ordenado;
- Compare o segundo elemento com o primeiro e verifique se o segundo elemento é menor e então troque-os;
- Mova para o terceiro elemento e compare-o com os dois primeiros elementos e coloque-o na posição correta;
- Repita até que toda a matriz esteja classificada.

## Vantagens:
- Simplicidade e facilidade quanto a implementação;
- Algoritmo de classificação estável;
- Eficiente em termos de espaço, pois é um algoritmo local;
- Eficiente com array pequenos e semi-ordenados;
## Desvantagens:
- Ineficiência para array grandes;
- Não é tão eficiente quando comparado com outros algoritmos de ordenação (Quick e Merge Sort).
