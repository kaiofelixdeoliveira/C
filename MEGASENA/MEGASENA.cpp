#include<stdio.h>
#include<stdlib.h>
#define COL 6
#define LIN 20


main(){

int cagueta[LIN][COL];
int M [LIN][COL]=
{
19,13,18,47,52,60,
39,12,14,29,42,56,
4,10,29,31,34,35,
11,19,21,23,27,52,
15,18,20,32,48,49,
10,15,25,38,47,53,
9,10,17,32,34,46,
12,28,37,46,48,53,
5,8,42,50,51,59,
12,13,24,29,32,41,
6,16,33,34,45,46,
12,17,25,29,41,52,
3,5,9,14,41,46,
25,34,38,45,53,60,
5,18,27,43,49,59,
1,10,17,24,42,51,
7,14,23,43,44,53,
3,8,28,39,42,59,
4,6,19,20,40,41,
3,10,42,49,54,57
};

int linhacont=0;
int columcont=0;
int numrepeticoes=0;
int columcont2 = 0;
int linhacont2 = 0;
int cont2=0;
int cont=0;
for(int linhacont=0;linhacont<=19;linhacont++){ //irá percorrer todas as linhas    | linhacont 0,

	for(int columcont=0;columcont<=5;columcont++){//ira percorrer todas as colunas | columcont 0,1,3,4,5,6,
												
		for(int linhacont2=0;linhacont2<=19;linhacont2++){		//compara numero inicial na posição 0 com as 20 linhas da matriz	//|cont 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19
			
			for(int columcont2=1;columcont2<=5;columcont2++){                                         //|cont2 0,1,2,3,4,5
				
				if((M[linhacont][columcont])==(M[linhacont2][columcont2])){ //se o numero escolhido é igual ao seus sucessores
																//(M[0][1])==(M[0][0]) | 13 == 19		
																//(M[0][1])==(M[0][1]) | 13 == 13
																//(M[0][1])==(M[0][2]) | 13 == 18
																//(M[0][1])==(M[0][3]) | 13 == 47
																//(M[0][1])==(M[0][4]) | 13 == 52
																//(M[0][1])==(M[0][5]) | 13 == 60
																
																//(M[0][1])==(M[1][0]) | 19 == 39
																//(M[0][1])==(M[0][1]) | 19 == 12
																//(M[0][1])==(M[0][2]) | 19 == 14
																//(M[0][1])==(M[0][3]) | 19 == 29
																//(M[0][1])==(M[0][4]) | 19 == 42
																//(M[0][1])==(M[0][5]) | 19 == 56
																
					
					numrepeticoes++;	
				

					
				    //printf("Numero de repeticoes:  linha: %d coluna: %d = %d  |COMPARA| linha: %d coluna: %d = %d \n ",linhacont,columcont,M[linhacont][columcont],cont,cont2,M[cont][cont2]);		
					
				}
			}
				
		 columcont2=0;//0,
			
		}
		
		//numrepeticoes--; //conta menos o numero do momento
		
		
			if(numrepeticoes>0){
				
				
				printf("Numero comparado: %d Repeticoes: %d \n\n",M[linhacont][columcont],numrepeticoes);
        
        //se o numero do momento for igual a algum numero anterior, não aparece
        		/* cagueta[linhacont][columcont]=M[linhacont][columcont]; //cagueta recebe 19,
        
				for(int cont=linhacont;cont>=0;cont--){//cont=0,
					
					for(int cont2=columcont;cont2>=0;cont2--){//cont2=0
			
        				if(M[linhacont][columcont]!=cagueta[cont][cont2]){ //19
		
              
            			printf("Numero comparado: %d Repeticoes: %d \n\n",M[linhacont][columcont],numrepeticoes);
 	   					}
 	    			}
 	    			
 	    			
        		} */	
        	}
	
		numrepeticoes=0;//zera o numero de repeticoes para o numero do momento
	}
	
	columcont=0;
		
}
     system("pause");	
	//printf("Numero de repeticoes:  %d",numrepeticoes);
}

