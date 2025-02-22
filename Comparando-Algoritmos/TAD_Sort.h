//TAD de Algoritmos de Ordenação

//Função para Leitura de Arquivo e ordenação com Selection
//Parametros: ponteiro do arquivo a ser ordenada e Qtde de itens.
void lerAquivoSelection(FILE *fp, int tam);

//Função para Leitura de Arquivo e ordenação com Insertion
//Parametros: ponteiro do arquivo a ser ordenada e Qtde de itens.
void lerArquivoInsertion(FILE *fp, int tam);

//Função para Leitura de Arquivo e ordenação com Bubble
//Parametros: ponteiro do arquivo a ser ordenada e Qtde de itens.
void lerArquivoBubble(FILE *fp, int tam);

//Função para Leitura de Arquivo e ordenação com Heap
//Parametros: ponteiro do arquivo a ser ordenada e Qtde de itens.
void lerArquivoHeap(FILE *fp, int tam);

//Função para Leitura de Arquivo e ordenação com Radix
//Parametros: ponteiro do arquivo a ser ordenada e Qtde de itens.
void lerArquivoRadix(FILE *fp, int tam);

//Função para Leitura de Arquivo e ordenação com Quick
//Parametros: ponteiro do arquivo a ser ordenada e Qtde de itens.
void lerArquivoQuick(FILE *fp, int tam);

//Função para Leitura de Arquivo e ordenação com Merge
//Parametros: ponteiro do arquivo a ser ordenada e Qtde de itens.
void lerArquivoMerge(FILE *fp, int tam);

//Função para escolher nome do arquivo desordenado conforme o tamanho.
//Parametros: Qtde de itens a serem escritos
char *nomeArquivoDord(int tam);

//Funação para escrever em um arquivo números desordenados
//Parametros: Ponteiro para o arquivo e quantidade de itens a serem escritos.
void escDord(FILE *fp, int tam);

//Função para escolher o nome do arquivo ordenado conforme o tamanho.
//Paramentros: Qtde de itens a serem escritos
char *nomeArquivoOrd(int tam);

//Função que escreve em um arquivo um vetor ordenado
//Paramentros: Ponteiro do arquivo a ser escrito, tamanho do array, e ponteiro do array
void escVetor(FILE *fp, int tam, int vet[]);