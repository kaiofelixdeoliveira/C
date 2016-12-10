#include <stdio.h>
#include <stdlib.h>


int Potencia(int A, int B);

main(){
int x,a,y,b,resultado;
printf("Informe 4 numeros inteiros como entra de dados: \n");
scanf("%d%d%d%d", &x,&a,&y,&b);
resultado = Potencia(x,a)+Potencia(y,b)+Potencia((x+y),(a+b));
printf("O resultado de %d^%d= %d \n",x,a,Potencia(x,a));
printf("O resultado de %d^%d= %d \n",y,b,Potencia(y,b));
printf("O resultado de %d^%d= %d \n",x+y,a+b,Potencia((x+y)+(a+b)));
printf("O resultado final da soma = %d \n",resultado);
system("pause");          
                   
}


//Subprograma como uma função
int Potencia(int A,int B){ 

int cont,Pot;//variaveis
cont = 1;Pot=1 ;
     while(cont <=B){
          Pot=Pot*A;
          cont++;
          
          } 
       return Pot;//comando para retornar um valor
}
