#include <stdio.h>

int fat (int n){

if(n==0 || n==1){

 return 1;
}
	return n * fat(n-1);
}


int main(){
	
	int num=5;
	
	printf("soma: %d = %d \n", num, fat(num));
	
	return 0;
}

