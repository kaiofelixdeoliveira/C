#include <stdio.h>

void Reverte(); //fun��o que reverte os numeros
int main(){
	
	printf("Escreva a sequencia de numeros inteiros: \n ");
	Reverte(); //chama a fun��o
	return 0; //retorna 0
}
void Reverte(){
		
	char c; //declara��o
	scanf("%c",&c);//le o caractere
	
	if( c != '\n'){
		
	Reverte();
	printf("%c",c);
	 
	}

}
