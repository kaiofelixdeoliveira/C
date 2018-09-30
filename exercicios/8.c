#include<stdio.h>

int main(){
float celsius, kelvin;
	
printf("Digite a temperatura em graus kelvin\n");
scanf("%f",&kelvin);
celsius =kelvin  - 273.15;

printf("Graus em celsius: %.2f", celsius);

}
