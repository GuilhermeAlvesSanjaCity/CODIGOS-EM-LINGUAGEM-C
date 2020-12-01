#include <stdio.h>
#include <stdlib.h>

//PROGRAMA Q NAO TERMINA ENQUANTO NAO IDENTIFICAR UMA STRING COM # NELA, CASO N,
//ELA CONTINUA O CICLO INFINITO

main(void)
{
    char ch,nch;
    int count; // CONT SERIA O CONTADOR
    int k;

    printf("INSIRA UMA STRING COM # PARA SAIR DO LOPING\n");
    scanf("%c", &ch);
    while(ch != '#'){

        if(ch >= '0' && ch <='9')
        {

            count = ch-'0' +1;
            scanf("%c",&nch); // RECEBE A VARIAVEL CASO O USUARIO DIGITE UM NUMERO
            for(k=0;k<count;k++)
                printf("%c",nch); // NCH RECEBE A VARIAVEL NUEMRO E EXIBE NA TELA




        }
        else
        printf("%c",ch); //CASO N SEJA NUMERO E N TENHA # VAI SER ARMAZENADO EM
        printf("");
        scanf("%c",&ch);






    }
    printf("#\n");









    return 0;
}


/*

#include <stdio.h>
main()
{
	char ch,nch;
	int count;
	int k;

	printf("Please input a string with a # in the end.\n");
	scanf("%c",&ch);
	while(ch != '#')
	{
		if(ch >= '0' && ch <= '9')
		{

			count = ch-'0'+1;
			scanf("%c",&nch);
			for(k=0;k<count;k++)
				printf("%c",nch);
		}
		else
			printf("%c",ch);
		printf(" ");
		scanf("%c",&ch);
	}
	printf("#\n");
}

*/
