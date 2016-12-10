#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()

{     int num,i;
      srand(time(NULL));
      
      printf("Os numeros aleatorios para mega sena: \n");
      i=0;
      
      while (i<6)
          
          {   
          num =1+ (rand()%60);
          printf(" %d,",num);
          i++;
          }
          
          printf("\n");
          system("pause");
          
} 
  
