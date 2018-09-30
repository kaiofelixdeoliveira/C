#include<stdio.h>

//Fn=Fn-1+aux-2;

int main(){
	
	
	int a=0;//(1)(1)(2)(3)
	int b=1;//(1)(2)(3)(5)
   int cont;//(1)(2)(3)(4)
	int aux;//(1)(2)(3)(5)
	
	for(cont=0;cont<10;cont++){

			if((aux%2)==0){
			aux=a+b;
			a=b;
			b=aux;
		
			
				printf("%d\n",aux);//(1)(2)
			}

	}
}
