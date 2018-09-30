#include<stdio.h>

int main(){
	
	int idade,ano,dtaNasc, aniversario;
	
	printf("Quantos anos você tem?\n");
	
	scanf("%d",&idade);
	
	printf("Qual o ano corrente?\n");
	
	scanf("%d",&ano);
	
	printf("Você ja fez aniversario este ano? (digite: 1 para sim ou 0 para não)\n");
	
	scanf("%d",&aniversario);
	
	if(aniversario==1){
	
	
		dtaNasc=(ano-idade);
	}else{
		dtaNasc=(ano-idade)-1;
	}


	printf("\n Você nasceu em: %d", dtaNasc);
	
}
