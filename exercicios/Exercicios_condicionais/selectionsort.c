#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int selecao(int *v)
{
    int i,j,menor,aux, n=5;
    for(i=0; i<n-1; i++)
    {
        menor=i;
        for(j=i+1; j<n; j++)
            if(v[j]<v[menor])
                menor=j;
        aux=v[i];
        v[i]=v[menor];
        v[menor]=aux;
    }
    
    return *v;
}




//metodo principal que executa o metodo de ordenação
int main ()
{
	int *v, *v2,cont,n=5; 
	v=(int*)malloc(MAX * sizeof(int));
	
	 
	v2=(int*)malloc(MAX * sizeof(int));
	
	for(cont=0;cont<n;cont++){
		
		scanf("%d",&v[cont]);
		
	}
	*v2=selecao(v);
	
		for(cont=0;cont<n;cont++){
		
		printf("%d , ",v[cont]);
		
	}
	
	
}




