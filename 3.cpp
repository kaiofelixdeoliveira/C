#include <stdio.h>

int main()
{

	int idade;
	printf("digite sua idade");

	scanf("d%", &idade);

	if(idade >= 18){
		
		printf("voc� � maior de idade");
	
	}else{
		
		printf("voc� � menor de idade");
	}
}
