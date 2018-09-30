#include<stdio.h>


int main(){
	
	//custo de fabrica
	float cdf;
	//custo do distribuidor
	float cdd;
	//custo dos impostos
	float cdi;
	
	printf("Entre com o valor do custo de fabrica(exmplo:12000.00)\n");
	
	scanf("%f",&cdf);
	
	if(cdf<=12000.00 && cdf>0){
		cdd=(cdf*0.5)+cdf;
		cdi=0;
		cdf=cdd;
		
		printf("O custo total de um carro novo é igual á R$: %.2f",cdf);
		
	}else if(cdf>=12000.00 && cdf<=25000.00){
		
		cdd=0.10;
		cdi=0.15;
		cdf=((cdf*cdd)+(cdf*cdi))+cdf;
		
		printf("O custo total de um carro novo é igual á R$: %.2f",cdf);
		
	}else if(cdf>25000.00){
		
		cdd=0.15;
		cdi=0.20;
		cdf=((cdf*cdd)+(cdf*cdi))+cdf;
		
		printf("O custo total de um carro novo é igual á R$: %.2f",cdf);
		
	}else{
		
		printf("Valor invalido");
	}	
}
