#include<stdio.h>
#include<conio.h>

int main(){
	
	int cont=10;
	
	while(cont>=0){

		Sleep(1000);

		printf("%d\n",cont);
	
		cont--;
	
		if(cont<0){
		
		printf("FIM");
		}
	}
}
