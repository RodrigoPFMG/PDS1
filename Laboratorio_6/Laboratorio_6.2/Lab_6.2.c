#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int primo(long int valor)
{
    long int contador=2;
    int primo;
    if (valor<2)
    {
        primo=-1;
    }
    
    else
    {
        for(;contador<=valor/2;contador++)
        {
        if ((valor%contador==0)&&(valor!=2))
        {
            primo=0;
            break;
        }   
        } 
        if (contador>valor/2)
        {
            primo=1;
        }
           
    }
    return primo;
}

int main(void)
{
  long int valor=0;
  int x= 0;
  while (scanf(" %ld",&valor)!=EOF)
  {
    x=primo(valor);
    printf("%d\n",x);
  }    
}