#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



void main()
{
        int password= 0, Number=0, price=58, i=0;
       // clrscr();
        printf("\n*************** BEM VINDO AO JOGO DE ADIVINHACAO DE NUMEROS**************!\n");
        while(password!=1234)
        {
        if( i>=3)
        return;
        i++;
        puts("\t\tpor favor insira a senha de acesso:");  //FUNCAO COM IF QUE DA 3 TENTATIVAS AO USUARIO PARA
        scanf("%d", &password);                           //ACERTAR A SENHA CASO N ACERTE O PROGRAMA SERA ENCERRADO COM O RETURN
        }


 // FUNCOES QUE SOLICITAM AO USUARIO UM NUMERO E ENTRA CONDICIONAL ATE O USUARIO ACERTAR O NUMERO
        i=0;
        while(Number!=price)  // NUMBER QUE SERIA DO USUARIO DEVE SER IGUAL AO PRICE QUE E O NUMERO DA SORTE
        {
        do{
        puts("por favor escolha um numero de 1 a 100:");
        scanf("%d", &Number);
        printf(" o numero que voce escolheu foi %d\n", Number);
        }while( !(Number>=1 && Number<=100));
        if(Number>=90)
        {
        printf("MUITO ALTO EM, PRESSIONE QUALQUER TECLA PRA TENTAR NOVAMENTE\n");
        }
        else if(Number >= 70 && Number< 90 )
        {
        printf("NUMERO MUITO ALTO TENTE NOVAMENTE PRESSIONE QUALQUER TECLA!\n");
        }
        else if(Number >=1 && Number<= 30)
        {
        printf("MUITO BAIXO! PRESSIONE QUALQUER TECLA PRA TENTAR NOVAMENTE\n");
        }
        else if(Number > 30 && Number <=50)
        {
        printf("NUMERO BAIXO AINDA, PRESSIONE QUALQUER TECLA E TENTE NOVAMENTE!\n");
        }
        else
        {
        if(Number == price)
        {
        printf("PARABENS VOCE ACERTOU MUITO BOM! ATE MAIS\n");
        }
        else if(Number< price)
        {
        printf("DESCULPE MAS SEU NUMERO FOI MUITO BAIXO TENTE NOVAMENTE\n");

        }
        else if(Number> price)
        printf("ESSA PASSOU LONGE EM, SEU NUMERO ESTA MUITO ALTO! PRESSIONA QUALQUER TECLA AI E TENTA NOVAMENTE\n");
        }
        getch();  // PARA PARAR O PROGRAMA
        }
        }

/*

 PROGRAM IN ENGLISH! ENJOY
#include <stdio.h>
#include <conio.h>
void main()
{
	int Password=0,Number=0,price=58,i=0;
	clrscr();
	printf("\n====This is a Number Guess Game!====\n");
	while( Password != 1234 )
	{
		if( i >= 3 )
			return;
		i++;
		puts("Please input Password: ");
		scanf("%d",&Password);
	}

	i=0;
	while( Number!=price )
	{
		do{
			puts("Please input a number between 1 and 100: ");
			scanf("%d",&Number);
			printf("Your input number is %d\n",Number);
		}while( !(Number>=1 && Number<=100) );
		if( Number >= 90 )
		{
			printf("Too Bigger! Press any key to try again!\n");
		}
		else if( Number >= 70 && Number < 90 )
		{
			printf("Bigger!\n");
		}
		else if( Number >= 1 && Number <= 30 )
		{
			printf("Too Small! Press any key to try again!\n");
		}
		else if( Number > 30 && Number <= 50 )
		{
			printf("Small! Press any key to try again!\n");
		}
		else
		{
			if( Number == price )
			{
				printf("OK! You are right! Bye Bye!\n");
			}
			else if( Number < price )
			{
				printf("Sorry,Only a little smaller! Press any key to try again!\n");

			}
			else if( Number > price )
				printf(" Sorry, Only a little bigger! Press any key to try again!\n");
		}
		getch();
	}
}

/*



