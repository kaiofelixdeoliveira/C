#include<stdio.h>

int main(){
	
	int idade,ano,dtaNasc, aniversario;
	
	printf("Quantos anos voc� tem?\n");
	
	scanf("%d",&idade);
	
	printf("Qual o ano corrente?\n");
	
	scanf("%d",&ano);
	
	printf("Voc� ja fez aniversario este ano? (digite: 1 para sim ou 0 para n�o)\n");
	
	scanf("%d",&aniversario);
	
	if(aniversario==1){
	
	
		dtaNasc=(ano-idade);
	}else{
		dtaNasc=(ano-idade)-1;
	}


	printf("\n Voc� nasceu em: %d", dtaNasc);
	
}
