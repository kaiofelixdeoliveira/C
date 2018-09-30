#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){

int *vet,soma,cont;

vet=(int*)malloc(MAX * sizeof(int));

vet[0]=1;
vet[1]=0;
vet[2]=5;
vet[3]=-2;
vet[4]=-5;
vet[5]=7;

//soma a0+a1+a5

soma=vet[0]+vet[1]+vet[5];

vet[4]=100;

for(cont=0;cont<6;cont++){
	
	
	printf("%d\n",vet[cont]);

}
}
