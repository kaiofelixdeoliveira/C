#include <stdio.h>

// isso � um coment�rio
/*
	esse � um coment�rio
	de m�ltiplas linhas
*/

int numero = 10;

int somar(int n1, int n2)
{
	int soma = n1 + n2;
	return soma;
}

int main()
{
	int n1, n2, resultado;
	
	printf("Digite dois numeros: ");
	scanf("%d %d", &n1, &n2);
	resultado = somar(n1, n2);
	printf("Soma: %d\n", resultado);
	return 0;
}
