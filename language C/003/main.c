#include <stdio.h>
#include <stdlib.h>


// PROGRAMA ONDE SE FAZ A COMPARAÇÃO ENTRE DOIS NUMEROS usando o float
int main(void)
{

    float x,y,c;
    printf("informe um valor para x\n");
    scanf("%f",&x);
    printf("informe um valor para y\n");
    scanf("%f",&y);
    c=x>y?x:y;

    printf("o maior entre(%f,%f) e %f",x,y,c);
    return 0;
}


// IN ENGLISH

/*
#include <stdio.h>
main()
{
	float x,y,c;
	printf("Please input x and y:\n");
	scanf("%f%f",&x,&y);
	c=x>y?x:y;
	printf("MAX of (%f,%f) is %f",x,y,c);
}

*/
