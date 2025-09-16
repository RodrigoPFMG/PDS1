#include <stdio.h>
#include<locale.h>
int main(void)
{
setlocale(LC_ALL,"Portuguese");
printf("Qual é o valor de x?\n");
int x=0;
scanf("%d", &x);
int mult_2= x/2;
int mult_3=x/3;
int mult_5=x/5;
printf("Múltiplos de 2:%d\nMúltiplos de 3:%d\nMúltiplos de 5:%d\n",mult_2,mult_3,mult_5);
int i=1;
int mult_todos=0;
while(i<=x)
    {
        if ((i%2==0)&&(i%3==0)&&(i%5==0)) 
        { 
            mult_todos++;
            i++;
        }
        else
        {
            i++;
        }
    }
printf("Múltiplos de todos:%d",mult_todos);    
}