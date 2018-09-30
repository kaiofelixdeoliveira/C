#include <stdio.h>

int main(int argc, char *argv[])
{
	char nome[50];
	
	printf("Digite seu nome: ");
	scanf("%[^\n]", nome);
	printf("Ola %s\n", nome);
	
	return 0;
}