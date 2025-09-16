#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long int Primo(long int x)
{
    long int contador=2;
    long int volta;
    for (; contador <= x/2; contador++)
    {
        if ((x%contador==0)&&(x!=2)) 
        {   
            volta=0;
            break;
        }              
    }
    if((x==2)||contador>x/2) volta=x;
    return volta;
}
long int Soma_Primos(long int x)
{   
    long int contagem_de_primos=0;
    long int soma=0;
    long int contador=2;
    long int teste=0;
    for (;contagem_de_primos<x;contador++)
    {   
        teste=soma;
        soma= soma+Primo(contador);
        if (teste!=soma) contagem_de_primos++;
    }
    return soma;
}
int main(void)
{
  long int numero=0;
  long int x=0;
  while(scanf(" %ld",&numero)!=EOF)
  {
    x=Soma_Primos(numero);
    printf("%ld\n",x);
  }
   
}