typedef struct pilha Pilha;

Pilha* criar_pilha();
void push(Pilha* p, float v);
float pop(Pilha* p);
int vazia(Pilha* p);
void liberar(Pilha* p);