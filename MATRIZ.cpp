#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Linha 3
#define Coluna 3

//Progreama entrada e saida de matrizes

main()
{
      int A[Linha][Coluna],i,j;
      srand(time(NULL));//semente para gerar os numeros aleatorios
      for(i=0;i<Linha;i++){//entrada de dados
      for(j=0;j<Coluna;j++)
      {
      printf("Entrar um numero p/ linha %d e coluna %d da matriz A\n",i,j);
      scanf("%d", &A[i][j]);//ATRIBUI UM VALOR VALOR NESSA POSIÇÃO
      
         
         A[i][j]=1 + rand()%45; //NUMERO GERADO ENTRE UM E 45
      }
      }
      printf("\n Os dados gerados :\n");
      for(i=0;i<Linha;i++){//saida de dados
      for(j=0;j<Coluna;j++){
         printf("A [%d][%d]=%d",i,j,A[i][j]);
      }
      printf("\n");
      }
      system("pause");
      
}
                          
                          
