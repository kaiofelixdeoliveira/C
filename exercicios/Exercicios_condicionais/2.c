#include<stdio.h>
#include<math.h>

int num1, numR;

int main(){
	
	printf("Entre com um numero\n");

	scanf("%d",&num1);

	if(num1>0){
		
		numR=sqrt(num1);
			printf("A raiz quadrada de %d é igual á: %d", num1,numR);
	}else{
		printf("Este numero é invalido");
			
	}
	

}
