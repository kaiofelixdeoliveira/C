#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int buble(int *v){

    int i,j,aux, n=5;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(v[i] > v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
                
            }
        }
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
	*v2=buble(v);
	
		for(cont=0;cont<n;cont++){
		
		printf("%d\n",v[cont]);
		
	}
	
	
}




