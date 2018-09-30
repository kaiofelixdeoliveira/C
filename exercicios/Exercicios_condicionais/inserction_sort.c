#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int insercao(int *v)
{
    int i,j,aux,n=5;


    for(j=1; j<n; j++)
    {
        aux=v[j];//segundo elemento da lista
        for(i=j-1; i>=0 && v[i]>aux; i--)
            v[i+1]=v[i];
        v[i+1]=aux;
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
	*v2=insercao(v);
	
		for(cont=0;cont<n;cont++){
		
		printf("[%d]",v[cont]);
		
	}
	
	
}
