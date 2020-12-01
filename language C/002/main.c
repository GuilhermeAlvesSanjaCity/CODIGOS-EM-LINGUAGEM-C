// RECEBE DOIS NUMEROS RETORNA MULTIPLICA E RETORNA O VALOR

#include <stdio.h>
#include <stdlib.h>

main(void){

    int x,y,m;
    printf("informe um valor para x\n");
    scanf("%d",&x);
    printf("informe um valor para Y\n");
    scanf("%d",&y);
    m = x*y;
    printf("o resultado da multiplicacao e\n %d * %d = %d\n" , x,y,m);


return 0;
}

// CODE IN ENGLISH
/* Input two numbers, output the product
#include <stdio.h>
main()
{
		int x,y,m;
		printf("Please input x and y\n");
		scanf("%d%d",&x,&y);
		m=x*y;
		printf("%d * %d = %d\n",x,y,m);
}
*/
