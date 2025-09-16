#include <stdio.h>
#include <stdlib.h>
#include <string.h>
unsigned int contagem_de_dias(int dia,int mes, int ano)
{   
    int max_dias=0;
    int dias_totais=0;
    int alcancou=0;
    for(;ano<=2020;ano++)
    { 
        for (;mes<=12; mes++)
        {
            if ((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12))
            {
                max_dias=31;
            }
            else if((mes==4)||(mes==6)||(mes==9)||(mes==11))
            {
                max_dias=30;
            }
            else
            {
                if ((ano%4==0)&&(ano%100!=0))
                {
                    max_dias=29;
                }
                else if (ano%400==0)
                {
                    max_dias=29;
                }
                else max_dias=28;
            }
            for (; dia <= max_dias; dia++)
            {
                dias_totais++;
                if (dia==max_dias)
                {
                    dia=1;
                    break;
                } 
                if((ano==2020)&&(mes==9)&&(dia==17))
                {
                    alcancou=1;
                    break;
                }            
            }
            if (alcancou==1)break;        
        }
        if (alcancou==1)
        {
            return(dias_totais);
        }
        dia=1;
        mes=1;    
    }
}
int main(void)
{
    int dia=0;
    int mes=0;
    int ano=0;
    unsigned int x=0;
    while((scanf(" %d %d %d", &dia, &mes, &ano)) != (EOF))
    {
        x=contagem_de_dias (dia,mes,ano);
        printf("%u\n",x);
    }
}