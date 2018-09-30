#include <stdio.h>
#include "arvore.h"

int main(int argc, char *argv[])
{
	Arv* a1 = criar('m', criar_vazia(), criar_vazia());
	Arv* a2 = criar('a', criar_vazia(), a1);
	Arv* a3 = criar('p', a1, a2);

	imprimir_arvore(a3);
	return 0;
}