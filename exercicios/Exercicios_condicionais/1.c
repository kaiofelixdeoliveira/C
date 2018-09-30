#include<stdio.h>

int num1, num2;

int main(){

	printf("Entre com um numero\n");

	scanf("%d",&num1);
	
	printf("Entre com o segundo numero\n");
	
	scanf("%d",&num2);

	if(num1>num2){
	
		printf("O primero numero é maior que o segundo: %d",num1);
	}else if(num1<num2){
		
		printf("O segundo numero é maior que o primeiro: %d",num2);
	}else{
		
		printf("Os dois numeros são iguais");
		
		
	}
}
