#include<stdio.h>

int main(){
int rest_segundos,segundos_min,segundos, minutos, horas;
	
printf("Digite a os segundos\n");
scanf("%d",&segundos);

rest_segundos=segundos%60;

segundos_min=segundos/60;


if(segundos_min>0 && segundos_min<60){

minutos=segundos_min;

}else{
	horas=segundos_min/60;
}





printf("Em horas: %d\n",horas );
printf("Em minutos: %d\n", minutos);
printf("Em segundos: %d", rest_segundos);

}
