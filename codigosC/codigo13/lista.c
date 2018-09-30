#include <stdlib.h>
#include "lista.h"

struct lista
{
	int info;
	struct lista* prox;
};

Lista* criar_lista()
{
	return NULL;
}

Lista* inserir_lista(Lista* l, int i)
{
	Lista* novo = (Lista*)malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}
