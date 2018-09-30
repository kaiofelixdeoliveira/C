#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char nome[] = "Marcos Castro";
	//int tam = strlen(nome);
	int i = 0;
	
	while(nome[i] != '\0')
	{
		printf("%c", nome[i]);
		i++;
	}
	
	return 0;
}