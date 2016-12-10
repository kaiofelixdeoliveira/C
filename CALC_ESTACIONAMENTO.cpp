#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	//declaração de variaveis

	int i;
	float horas[3];
	float calculo;
	float calculo2;
	float h;
	float carro[3];
	float horasTarifadas;
	float calculartaxas;
	
	for(i=1;i<=3;i++){
	
		printf("Por favor escreva quantas horas o carro %d ficou no estacionamento:\n",i);
	
		scanf("%f", &horas[i]);
		h=horas[i];
		carro[i]=0;
		if(h<=3){
		carro[i]=2.00;
		
		}else if((h>=3)&&(h<=6)){
			
			calculo=h-3;
			calculo2=(calculo*0.50);
			carro[i]=(2+calculo2);
		}
		else if (h>6){
			
			carro[i]=10.00;
		
		}
	}
	
	horasTarifadas=horas[1]+horas[2]+horas[3];
	
	calculartaxas=carro[1]+carro[2]+carro[3];
	
	printf("Carros \t Horas \t Taxa \t \n");
	
	for(i=1;i<=3;i++){
		printf("%d \t%.2f \t%.2f\n",i,horas[i],carro[i]);
	
	}
	
	printf("Total\t%.2f\t%.2f\n",horasTarifadas,calculartaxas);
	
	system("Pause");
	
	}

