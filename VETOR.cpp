#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
//Programa para gerar os numeros aleatorios
{     int A[6],i;
      srand(time(NULL));//somente para gerar os numeros aleatorios
      
      for (i=0;i<6;i++)
          
          {   A[i]=1+ (rand()%60);}
          printf("Os numeros aleatorios gerados: \n");
          for(i=0;i<6;i++)
          {   printf("A[%d]=%d \n", i,A[i]);
          }
          printf("\n");
          system("pause");
          
} 
  
