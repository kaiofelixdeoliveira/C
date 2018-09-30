#include<stdio.h>

int main(){
float celsius, farenhait;
	
printf("Digite a temperatura em graus farenhait\n");
scanf("%f",&farenhait);
celsius =5.0 *(farenhait - 32.0) / 9.0;

printf("Graus em celsius: %.2f", celsius);

}
