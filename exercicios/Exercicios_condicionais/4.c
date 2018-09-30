#include<stdio.h>
#include <stdlib.h>
# define MAX 10
int main(){
	
		int *v, cont, num;
	//cast de void para int, MAX vezes o tamnho de um inteiro na memoria é igual o tanho de alocação de espaço dinamico no vetor.
	v=(int*)malloc(MAX * sizeof(int));
	
	while(cont<5){
		
		num++;
		if((num%3)==0){
			
		
		v[cont]=num;
		
	
		printf("Segue os cinco primeiros numeros multiplos de 3: %d\n", v[cont]);
		
		cont++;
		}
	
	}
		
}
