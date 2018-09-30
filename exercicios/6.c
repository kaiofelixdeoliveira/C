#include<stdio.h>

int main(){
float celsius, farenhait;
	
printf("Digite a temperatura em graus celsius\n");
scanf("%f",&celsius);
farenhait=celsius * (9.0/5.0)+32.0;

printf("Graus em farenheit: %.2f", farenhait);

}
