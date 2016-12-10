#include <stdio.h>

void Reverte(); //função que reverte os numeros
int main(){
	
	printf("Escreva a sequencia de numeros inteiros: \n ");
	Reverte(); //chama a função
	return 0; //retorna 0
}
void Reverte(){
		
	char c; //declaração
	scanf("%c",&c);//le o caractere
	
	if( c != '\n'){
		
	Reverte();
	printf("%c",c);
	 
	}

}
