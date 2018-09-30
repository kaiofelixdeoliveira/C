#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 10


int main(){
	
char *p_Maiuscula;

p_Maiuscula=(char*)malloc(MAX * sizeof(char));

printf("Digite uma palavra em letras maiusculas\n");
gets(p_Maiuscula);

printf("Palavra em letras minusculas: %s",strlwr(p_Maiuscula));

return 0;
}
