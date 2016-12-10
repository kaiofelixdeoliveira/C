#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
      /* verifica se o numero digitado é zero, par ou impar */
      int x;
      setlocale(LC_ALL,"Portuguese");//apresentar acento
      printf("\n Digite o numero:"); //exibe uma mensagem
      scanf("%d", &x); //le um numero
      if (!x)
         printf("\n\n Infelizmente você errou");
         
      else
          if(x%2)
                 printf("\n o numero digitado é impar");
          else
                 printf("\n o numero digitado é Par");
          system("pause");
      }
