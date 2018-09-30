#include <stdio.h>
#include <stdlib.h>
#define MAX 10

//USO DA FUNÇÃO MALLOC

int main()
{

//Declaração de um ponteiro
	int *v;
	//cast de void para int
	v=(int*)malloc(MAX * sizeof(int));
	if(v==NULL){
		
		printf("Memoria insificiente \n");
		exit(1);
	}
	
	v[0]=10;
	v[30]=20;
	
	//Libera a memoria
	
	printf("%d \n",v[30]);
	free(v);
	
	
	return 0;
}
