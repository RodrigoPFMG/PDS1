#include <stdio.h>
#include<locale.h>
int main(void)
{
setlocale(LC_ALL,"Portuguese");
printf("Qual o valor em R$?\n");
int valor=0;
scanf("%d",&valor);
int notas_100=0;
int notas_50=0;
int notas_20=0;
int notas_10=0;
int notas_5=0;
int notas_2=0;
notas_100= valor/100;
valor=valor-(100*notas_100);
notas_50= valor/50;
valor=valor-(50*notas_50);
notas_20= valor/20;
valor=valor-(20*notas_20);
notas_10= valor/10;
valor=valor-(10*notas_10);
notas_5= valor/5;
valor=valor-(5*notas_5);
notas_2= valor/2;
valor=valor-(2*notas_2);
printf("100:%d\n",notas_100);
printf("50:%d\n",notas_50);
printf("20:%d\n",notas_20);
printf("10:%d\n",notas_10);
printf("5:%d\n",notas_5);
printf("2:%d\n",notas_2);
printf("1:%d\n",valor);
}



