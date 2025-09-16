#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int bissexto(int ano)
{
    int resultado=0;
    if ((ano%4==0)&&(ano%100!=0))
    {
        resultado=1;
    }
    else if (ano%400==0)
    {
        resultado=1;
    }
    return resultado;

}

int main(void)
{
    int ano=0;
    int check=0;
    while ((scanf(" %d",&ano))!=EOF)
    {
        check=bissexto(ano);
        printf("%d\n",check);
    }
    
  
}