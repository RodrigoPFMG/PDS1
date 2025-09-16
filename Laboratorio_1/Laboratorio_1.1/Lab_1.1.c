#include <stdio.h>
#include<locale.h>
int main(void)
{
setlocale(LC_ALL,"Portuguese");
float temperatura=0.0;
float retorno=0.0;
printf("Qual é a temperatura em graus Celsius?\nUse o modelo X.X\n");
scanf("%f",&temperatura);
retorno= (temperatura*1.8)+32;
printf("%.0f",retorno);
}