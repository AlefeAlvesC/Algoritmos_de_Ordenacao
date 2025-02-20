# Busca Binária
A busca binária é um algoritmo de busca usado para encontrar a posição de um valor alvo dentro de uma matriz ordenada. Ele funciona dividindo repetidamente o intervalo de busca pela metade até que o valor alvo seja encontrado ou o intervalo esteja vazio. O intervalo de busca é dividido pela metade comparando o elemento alvo com o valor do meio do espaço de busca.

## Funcionamento:
- Divida o espaço de busca em duas metades encontrando o índice do meio. 
- Compare o elemento do meio do espaço de busca com a chave. 
- Se a chave for encontrada no elemento do meio, o processo será encerrado.
- Se a chave não for encontrada no elemento do meio, escolha qual metade será usada como o próximo espaço de busca.
- Se a chave for menor que o elemento do meio, o lado esquerdo será usado para a próxima pesquisa.
- Se a chave for maior que o elemento do meio, o lado direito será usado para a próxima pesquisa.
- Esse processo continua até que a chave seja encontrada ou o espaço total de busca seja esgotado.

## Vantagens:
- A busca binária é mais rápida que a busca sequencial, especialmente para matrizes grandes.
- Mais eficiente do que outros algoritmos de busca com complexidade de tempo semelhante, como busca de interpolação ou busca exponencial.
- A busca binária é adequada para pesquisar grandes conjuntos de dados armazenados na memória externa, como em um disco rígido ou na nuvem.
## Desvantagens:
- A matriz deve ser ordenada.
- A busca binária exige que a estrutura de dados pesquisada seja armazenada em locais de memória contíguos. 
- A busca binária exige que os elementos da matriz sejam comparáveis, o que significa que eles devem poder ser ordenados.
