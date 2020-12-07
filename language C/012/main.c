#include <stdio.h>
#include <stdlib.h>

void main()
{

    char selecionar, cartaodecredito, debito;
    while(1)
    {

        do{
            //clrscr();
            puts(" ************************ ");
            puts(" **SELECIONE UMA OPCAO*** ");
            puts(" **1.VERIFICAR SALDO***** ");
            puts(" **2.CREDITO************* ");
            puts(" **3. DEBITO************* ");
            puts(" **4. RETORNAR*********** ");
            puts(" ======================== ");
            selecionar = getch();
        }
        while(selecionar!='1' && selecionar!= '2' && selecionar!= '3' && selecionar!= '4');
        switch(selecionar)
        {

        case '1':
                //clrscr();
                puts("============================");
                puts("============================");
                puts("===seu saldo é R$1000,00====");
                puts("===PRESSIONE QUALQUER TECLA=");
                puts("=====PARA VOLTAR ===========");
                puts("============================");
                puts("============================");
                puts("============================");
                getch();
                break;

        case '2':
                do{

                    //clrscr();
                    puts("==========================================");
                    puts("==FAVOR SELECIONAR CARTAO DE CREDITO:=====");
                    puts("==1.R$50==================================");
                    puts("==2.R$100=================================");
                    puts("==3.RETORNAR==============================");
                    puts("==========================================");
                    cartaodecredito = getch();
                }
                while(cartaodecredito != '1' && cartaodecredito != '2'
                     && cartaodecredito != '3');
                switch(cartaodecredito){

                    case '1':
                    //clrscr();
                    puts("=========================================================");
                    puts("===SEU CREDITO E DE R$ 50,00=============================");
                    puts("==OBRIGADO===============================================");
                    puts("==PRESSIONE QUALQUER TECLA PRA CONTINUAR=================");
                    puts("=========================================================");
                    puts("=========================================================");
                    getch();
                    break;

                    case '2':
                    puts("=========================================================");
                    puts("======SEU CREDITO E DE R$100,00==========================");
                    puts("======OBRIGADO===========================================");
                    puts("=========================================================");
                    puts("===PRESSIONE QUALQUER TECLA PRA CONTINUAR================");
                    getch();
                    break;

                 case '3':
                 break;
                }
                break;

                case '3':
                do {
                    //clrscr();
                    puts("====por favor selecione o valor do carta de debito=============");
                    puts("=1. R$50=======================================================");
                    puts("=2. R$100======================================================");
                    puts("=3. R$500======================================================");
                    puts("=4. R$1000=====================================================");
                    puts("=5. RETORNAR===================================================");
                    puts("===============================================================");
                    debito = getch();
                }
                while( debito!= '1' && debito != '2' && debito != '3' && debito != '4' &&
                      debito != '5');
                switch(debito)
                {

                  case '1':
                    //clrscr();
                    puts("=========================================================");
                    puts("===SEU DEBITO E DE R$ 50,00=============================");
                    puts("==OBRIGADO===============================================");
                    puts("==PRESSIONE QUALQUER TECLA PRA CONTINUAR=================");
                    puts("=========================================================");
                    puts("=========================================================");
                    getch();
                    break;

                   case '2':
                    //clrscr();
                    puts("=========================================================");
                    puts("===SEU DEBITO E DE R$ 100,00=============================");
                    puts("==OBRIGADO===============================================");
                    puts("==PRESSIONE QUALQUER TECLA PRA CONTINUAR=================");
                    puts("=========================================================");
                    puts("=========================================================");
                    getch();
                    break;

                   case '3':
                    //clrscr();
                    puts("=========================================================");
                    puts("===SEU DEBITO E DE R$ 500,00=============================");
                    puts("==OBRIGADO===============================================");
                    puts("==PRESSIONE QUALQUER TECLA PRA CONTINUAR=================");
                    puts("=========================================================");
                    puts("=========================================================");
                    getch();
                    break;

                    case '4':
                    //clrscr();
                    puts("=========================================================");
                    puts("===SEU DEBITO E DE R$ 1000,00=============================");
                    puts("==OBRIGADO===============================================");
                    puts("==PRESSIONE QUALQUER TECLA PRA CONTINUAR=================");
                    puts("=========================================================");
                    puts("=========================================================");
                    getch();
                    break;

                    case '5':
                        break;
                    }
                    break;

                    case '4':
                        //clrscr();
                        puts("============================================");
                        puts("===OBRIGADO POR UTILIZAR O  ATE MAIS===");
                        puts("============================================");
                        puts("============================================");
                        puts("============================================");
                        return;


                }
                }
                }



/*

english


#include <stdio.h>
void main()
{
	char SelectKey,CreditMoney,DebitMoney;
	while(1)
	{
		do{
			clrscr();
			puts("=========================");
			puts("|  Please select key:   |");
			puts("|  1. Quary             |");
			puts("|  2. Credit            |");
			puts("|  3. Debit             |");
			puts("|  4. Return            |");
			puts("=========================");
			SelectKey = getch();
		}while( SelectKey!='1' && SelectKey!='2' && SelectKey!='3' && SelectKey!='4' );
		switch(SelectKey)
		{
			case '1':
				clrscr();
				puts("================================");
				puts("|    Your balance is $1000.    |");
				puts("|  Press any key to return...  |");
				puts("================================");
				getch();
				break;
			case '2':
				do{
					clrscr();
					puts("==================================");
					puts("|   Please select Credit money:  |");
					puts("|   1. $50                       |");
					puts("|   2. $100                      |");
					puts("|   3. Return                    |");
					puts("==================================");
					CreditMoney = getch();
				}while( CreditMoney!='1' && CreditMoney!='2' && CreditMoney!='3' );
				switch(CreditMoney)
				{
					case '1':
						clrscr();
						puts("=========================================");
						puts("|  Your Credit money is $50,Thank you!  |");
						puts("|         Press any key to return...    |");
						puts("=========================================");
						getch();
						break;
					case '2':
						clrscr();
						puts("==========================================");
						puts("|  Your Credit money is $100,Thank you!  |");
						puts("|         Press any key to return...     |");
						puts("==========================================");
						getch();
						break;
					case '3':
						break;
				}
				break;
			case '3':
				do{
					clrscr();
					puts("====================================");
					puts("|   Please select Debit money:     |");
					puts("|   1. $50                         |");
					puts("|   2. $100                        |");
					puts("|   3. $500                        |");
					puts("|   4. $1000                       |");
					puts("|   5. Return                      |");
					puts("====================================");
					DebitMoney = getch();
				}while(	DebitMoney!='1' && DebitMoney!='2' && DebitMoney!='3' \
				 && DebitMoney!='4' && DebitMoney!='5' );
				switch(DebitMoney)
				{
					case '1':
						clrscr();
						puts("===========================================");
						puts("|   Your Debit money is $50,Thank you!    |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getch();
						break;
					case '2':
						clrscr();
 						puts("===========================================");
						puts("|   Your Debit money is $100,Thank you!   |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getch();
						break;
					case '3':
						clrscr();
						puts("===========================================");
						puts("|   Your Debit money is $500,Thank you!   |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getch();
						break;
					case '4':
						clrscr();
						puts("===========================================");
						puts("|   Your Debit money is $1000,Thank you!  |");
						puts("|        Press any key to return...       |");
						puts("===========================================");
						getch();
						break;
					case '5':
						break;
				}
				break;
			case '4':
				clrscr();
				puts("================================");
				puts("|   Thank you for your using!  |");
				puts("|            Good bye!         |");
				puts("================================");
				return;
		}
	}
}*/
