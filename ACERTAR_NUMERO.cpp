#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
      /* programa para tentar acertar um numero */
      int adivinha = 35, numero; //declara��o de variaveis
      
      setlocale(LC_ALL,"Portuguese");//apresentar acento
      printf("\n Adivinhe o numero:"); //exibe uma mensagem
      scanf("%d", &numero); //le um numero
      if (numero != adivinha)
         printf("\n\n Infelizmente voc� errou");
         
      else
          printf("\n Parabens, voc� acertou");
          system("pause");
      }
