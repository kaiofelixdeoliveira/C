#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()

{     int num1,num2;
      
      
      printf("Informe o primeiro inteiro \n");
      scanf("%d",&num1);
      printf("Informe o segundo inteiro \n");
      scanf("%d",&num2);
      
      while (num2<num1)
          
          {   
          printf("Digite de novo: segundo numero >= primeiro numero \n");
          printf("Informe o primeiro numero");
          scanf("%d",&num1);
          printf("Informe segundo inteiro: \n");
          scanf("%d",&num2);
          }
          while (num1<=num2)
          {
          printf("%d,",num1);
          num1++;
          }
          printf("\n");
          system("pause");
          
          
} 
