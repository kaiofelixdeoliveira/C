#include<stdio.h>
#include<stdlib.h>
#define MAX 10

//cria��o de uma struct, uma struct � comparavel � uma classe no java
//typedef � usado para dar um apelido a struct, com isso quando uma struct for chamada no metdo main n�o ser� necessario fazer o contrutor.
typedef char *string;

typedef struct agenda{
	
	string horario;
	string data;
	string compromisso;
	
}tagenda; 

int main(){
	
	
	tagenda *p;
	string str1,str2,str3;
	//faz a aloca��o dinamica para a struct na memoria
	p= (struct agenda*)malloc(sizeof(struct agenda));
	
	//alloca memoria dinamicamente
	str1=malloc (10 * sizeof(char));
	str2=malloc (10 * sizeof(char));
	str3=malloc (10 * sizeof(char));

	printf("Digite o horario:\n");	
	gets(str1);//faz a mesma coisa que o scanf
	
	printf("Digite a data:\n");
	gets(str2);//faz a mesma coisa que o scanf
	
	printf("Digite o compromisso\n", p->horario);
	gets(str3);//faz a mesma coisa que o scanf


	p->horario=str1;
	p->data=str2;
	p->compromisso=str3;
	
	printf("O horario �: %s\n", p->horario);
	printf("A data �: %s\n", p->data);
	printf("O compromisso �: %s\n", p->compromisso);
	
	return 0;
}
