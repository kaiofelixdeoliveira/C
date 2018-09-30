#include<stdio.h>
#include<stdlib.h>
#define MAX 10

typedef char *string;

typedef struct receita{
	
	int quantidade;
	string ingredientes;
	string nome;
	
}treceita; 

int main(void){
	
	int cont,cont2;
	treceita *p;
	string *v;
	p=(struct receita*)malloc(sizeof(struct receita));
	

	(p->ingredientes)=malloc(MAX * sizeof(char));
	(p->nome)=malloc(MAX * sizeof(char));
	(p->quantidade)=malloc(MAX * sizeof(int));
	v=malloc(MAX * sizeof(char));;
	
	
	for(cont=0;cont<1;cont++){
		
		printf("Entre com o nome da receita\n");
		scanf("%s",(p->nome));
		v[cont]=p->nome;
		
		printf("Entre com a quantidade\n");
		scanf("%d",&(p->quantidade));
		v[cont]=p->quantidade;;
		
		for(cont2=0;cont2<(p->quantidade);cont2++){
		
			printf("Entre com o nome do ingrediente\n");
			scanf("%s",((*p).ingredientes));
			v[cont]=p->ingredientes;
			
		}
		
	}
	

	printf("Digite o numero da receita\n ");
	scanf("%d",&cont);
	printf("Segue a receita: %s",v[cont]);	
		
	
	return 0;
}
