#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("OS BYTES (TAMANHO) QUE AS VARIAVEIS CONTEM SAO\n");
    printf("int:%d bytes\n", sizeof(int));

    printf("char:%d byte\n" ,sizeof(char));

    printf("short:%d byte\n", sizeof(short));

    printf("long:%d byte\n", sizeof(long));

    printf("float:%d byte\n", sizeof(float));

    printf("double:%d byte\n" ,sizeof(double));

    printf("long double:%d byte\n", sizeof(long double));
    getchar();
}


/*

#include <stdio.h>
void main()
{

    printf("The bytes of the variables are:\n");
    printf("int:%d bytes\n",sizeof(int));

    printf("char:%d byte\n",sizeof(char));

    printf("short:%d bytes\n",sizeof(short));

    printf("long:%d bytes\n",sizeof(long));

    printf("float:%d bytes\n",sizeof(float));

    printf("double:%d bytes\n",sizeof(double));

    printf("long double:%d bytes\n",sizeof(long double));
    getchar();

}

*/
