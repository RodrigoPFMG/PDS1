#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 
     
int main(void)
{
    printf("Qual é o valor de x?\n");
    double x=0;
    scanf ("%lf",&x);
    double i;
    double pi=4;
    double numerador=3;
    long int contador =0;
    for (i=1;(pi>(M_PI+x))||(pi<(M_PI-x));i++)
    {   
        if (contador%2==0)
        {
            numerador=numerador*-1;
            pi+=(4/numerador);
            numerador=(abs(numerador)+2);
            contador++;
        }
        else
        {
            pi+=(4/numerador);
            numerador=(abs(numerador)+2);
            contador++;
        }    
    }
    printf("%.0lf",i);
}