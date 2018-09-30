typedef struct lista Lista;

// função de criação da lista
Lista* criar_lista();

// função que insere no início da lista
Lista* inserir_lista(Lista* l, int i);

// função para imprimir os elementos da lista
void imprimir_lista(Lista* l);

// verifica se a lista está vazia
int vazia(Lista* l);