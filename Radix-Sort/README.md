# Radix Sort
Radix Sort é um algoritmo de ordenação linear que ordena elementos processando-os dígito por dígito. É um algoritmo de ordenação eficiente para inteiros ou strings com chaves de tamanho fixo. 
Em vez de comparar elementos diretamente, o Radix Sort distribui os elementos em grupos com base no valor de cada dígito. Ao ordenar repetidamente os elementos por seus dígitos significativos, do menos significativo para o mais significativo, o Radix Sort atinge a ordem de classificação final.

## Funcionamento:
- Encontre o maior elemento da matriz e guarde o número de dígitos deste em uma matriz pois este servirá de base para avaliar todos os dígitos dos elementos;
- Agora percorra o array tendo o dígito menos significativo como base. Use algum método de ordenação estável para auxiliar na ordenação por dígitos, por exemplo couting sort ou bucket sort.
- Passe para a próxima casa e ordene os elementos com base nos algarismos desta casa. Faça isso até que todos os dígitos tenham sido verificados.

## Vantagens:
- A ordenação por radix tem uma complexidade de tempo linear, o que a torna mais rápida do que algoritmos de ordenação baseados em comparação para grandes conjuntos de dados.
- É um algoritmo de ordenação estável, o que significa que elementos com o mesmo valor-chave mantêm sua ordem relativa na saída ordenada.
- A ordenação por raiz é eficiente para classificar grandes números de números inteiros ou strings.
## Desvantagens:
- A ordenação por radix não é eficiente para ordenar números de ponto flutuante ou outros tipos de dados que não podem ser facilmente mapeados para um pequeno número de dígitos.
- É necessária uma quantidade significativa de memória para manter a contagem do número de vezes que cada valor de dígito aparece.
- Não é eficiente para conjuntos de dados pequenos ou conjuntos de dados com um pequeno número de chaves exclusivas.
- Ele exige que os dados que estão sendo classificados possam ser representados em um número fixo de dígitos, o que pode não ser o caso de alguns tipos de dados.
