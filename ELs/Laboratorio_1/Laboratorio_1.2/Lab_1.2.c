#include <stdio.h>
#include<locale.h>
int main(void)
{
setlocale(LC_ALL,"Portuguese");
printf("Escreva 3 números:\n");
int num1=0;
int num2=0;
int num3=0;
int maior=0;
scanf("%d\n %d\n %d",&num1,&num2,&num3);
if (num1>num2)
{
    if (num1>num3)
    {
       maior=num1;
    }
    else
    {
        maior=num3;
    }
}   
else
    {
    if (num2>num3)
    {
        maior=num2;
    }
    else
    {
        maior=num3;
    }

}
printf("O maior valor é:%d\n",maior);

}

