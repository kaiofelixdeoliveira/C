typedef struct lista Lista;

// fun��o de cria��o da lista
Lista* criar_lista();

// fun��o que insere no in�cio da lista
Lista* inserir_lista(Lista* l, int i);

// fun��o para imprimir os elementos da lista
void imprimir_lista(Lista* l);

// verifica se a lista est� vazia
int vazia(Lista* l);