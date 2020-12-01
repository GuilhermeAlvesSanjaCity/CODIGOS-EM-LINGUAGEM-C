// PROGRAMA ONDE VC INDICA UM NUMERO E ESTE SOMA A DOIS USANDO CONDICIONAIS, OTIMO JEITO
//DE PRATICAR

#include <stdio.h>
#include <stdlib.h>

void main()
{


    int i,j,n;
    long soma=0,temp=0;

    printf("POR FAVOR INSIRA UM NUMERO PARA N:\n");
    scanf("%d",&n);
    if(n<1)
    {
        printf("O NUMERO(N) NAO DEVE SER MENOR QUE 1 ");
        return;
    }
    else{ //CASO CONTRARIO = ELSE
    for(i=1;i<=n; i++); //PARA   = CONDICIONAL FOR
    {
        temp=0;
        for(j=1;j<=i;j++);
        temp+=j;
        soma+=temp; //SOMA E DEPOIS DA O RESULTADO

    }
    }
    printf("A SOMA DA SEQUENCIA(%d) E %d\n", n,soma);
    getchar();
    getchar();


    return 0;
}


//ENGLISH
/*
#include <stdio.h>
main()
{
	int i,j,n;
	long sum=0,temp=0;

	printf("Please input a number to n:\n");
	scanf("%d",&n);
	if(n<1)
	{
		printf("The n must no less than 1!\n");
		return;
	}

	for(i=1;i<=n;i++)
	{
		temp=0;
		for(j=1;j<=i;j++)
			temp+=j;
		sum+=temp;
	}
	printf("The sum of the sequence(%d) is %d\n",n,sum);
	getchar();
	getchar();
}
*/
