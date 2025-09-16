#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    double fibonacci[800];
    int contador;
    fibonacci[0]=0;
    fibonacci[1]=1;
    int var;
    int apontador;
    for(contador=2;contador<=799;contador++)
    {
        fibonacci[contador]=fibonacci[contador-1]+fibonacci[contador-2];
    }
    while((apontador>=0)&&(apontador<799))
    {
        scanf("%d",&apontador);
        printf ("%.0lf\n", fibonacci[apontador]);   
    }
}