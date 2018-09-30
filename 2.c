#include <stdio.h>

int somar(int n1, int n2)
{
	int soma=n1+n2;
	
	return soma;
}

//comentario simples

/*
comentario longo
*/

int main()
{	

	int n1,n2,resultado;
	printf("digite um numero");
	scanf("%d %d",&n1,&n2);
	resultado = somar(n1,n2);
	printf("%d \n",resultado);
	return 0;
	
}
