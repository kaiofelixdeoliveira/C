#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
      /* programa para tentar acertar um numero */
      int adivinha = 35, numero; //declaração de variaveis
      
      setlocale(LC_ALL,"Portuguese");//apresentar acento
      printf("\n Adivinhe o numero:"); //exibe uma mensagem
      scanf("%d", &numero); //le um numero
      if (numero != adivinha)
         printf("\n\n Infelizmente você errou");
         
      else
          printf("\n Parabens, você acertou");
          system("pause");
      }
