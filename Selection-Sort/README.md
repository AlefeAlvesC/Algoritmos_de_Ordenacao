# Selection Sort
Selection Sort é um algoritmo de ordenação baseado em comparação. Ele ordena um array selecionando repetidamente o menor (ou maior) elemento da parte não ordenada e trocando com o
primeiro elemento não ordenado. Este processo continua até que o array inteiro esteja ordenado.

## Funcionamento
- Primeiro, encontramos o menor elemento e o trocamos com o primeiro elemento. Dessa forma, obtemos o menor elemento em sua posição correta.
- Então encontramos o menor entre os elementos restantes (ou o segundo menor) e o trocamos com o segundo elemento.
- Continuamos fazendo isso até que todos os elementos sejam movidos para a posição correta.

## Vantagens
Pode-se citar como principais vantagens deste algoritmo:
- A facilidade quanto a sua implementação;
- A ordenação ocorre localmente, necessitando de somente uma variável extra (in-place);
- Quando comparado a outros algoritmos a quantidades de trocas que ocorrem neste é menor.
## Desvantagens
Quanto as desvantagens são possíveis citar:
- A ordenação por selection tem uma complexidade de tempo O(n^2) que a torna lenta quando comparada com algoritmos Quick e Merge Sort;
- É um algoritmo não estável, ou seja, ele não mantém a ordem relativa de elementos iguais.
