#include <stdio.h>
#include<stdlib.h>
int main(void)
{
int a=0;
int b=0;
scanf("%d" ,&a);
scanf("%d" ,&b);
int primos[(b-a)];
int valor_teste;
int ponteiro=0;
int divisor;
int impressor;
for(valor_teste=a;valor_teste<=b;valor_teste++)
    {
        for (divisor=2;divisor<=valor_teste;divisor++)
        {  
            if(divisor==valor_teste)
                {
                    primos[ponteiro]=valor_teste;
                    ponteiro++;
                }
            else if((valor_teste%divisor)==0)
                {
                    break;
                } 
        } 
    }
for(impressor=0;impressor<ponteiro;impressor++)
{
    printf("%d\n" ,primos[impressor]);
}    
}