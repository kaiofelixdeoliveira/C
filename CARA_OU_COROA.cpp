#include<stdio.h>
#include<stdlib.h>

int lancamentos(); //declara��o da fun��o lan�amentos
int main(){
	
	//declara��o de variaveis
	int entrar;
	int quantidade_moedas=100;
	int resultado;
	int mCara=0;
	int mCoroa=0;
	
	for(entrar=1;entrar<=quantidade_moedas;entrar++){
		
		resultado=lancamentos();
		
		if(resultado==0)
		
			mCara++;
		
		else{
		
			mCoroa++;
		
		}
	} 
	printf("########################################");
	printf("\n Quantidade de lancamentos %d \n",quantidade_moedas); 
	printf("                                      ##");
	printf("\n Quantidade de Caras: %d \n",mCara);
	printf("                                      ##");
	printf("\n Quantidade de Coroas: %d \n\n",mCoroa);
	printf("######################################## \n");
	
	system("Pause"); //para o programa

	}

	int lancamentos(){ //fun��o que verifica os lan�amentos da moeda
		
		int lancamento1;
		lancamento1=rand()% 2;
		return lancamento1;
	
	}

