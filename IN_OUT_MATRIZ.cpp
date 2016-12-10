#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Alunos 10
#define Provas 3
#define Media 10

//Progreama entrada e saida de matrizes

main()
{
      float Notas[Alunos][Provas][Media];
      int i,j;
      srand(time(NULL));//semente para gerar os numeros aleatorios
      for(i=0;i<Alunos;i++){//entrada de dados
      for(j=0;j<Provas;j++)
      {
      printf("Entrar com a nota da p/ linha %d e coluna %d da matriz A\n",i+1,j+1);
     //scanf("%f", &Notas[i][j]);//ATRIBUI UM VALOR VALOR NESSA POSIÇÃO
     Notas[i][j]=1 + rand()%10; //NUMERO GERADO ENTRE UM E 10
      }
      }     
       printf("\n Os dados gerados :\n");
      for(i=0;i<Alunos;i++){//saida de dados
      for(j=0;j<Provas;j++){
         printf("Nota [%d][%d]=%3.f  ",i+1,j+1,Notas[i][j]);
         
      }
      printf("\n");
      }
      system("pause");
      
}
