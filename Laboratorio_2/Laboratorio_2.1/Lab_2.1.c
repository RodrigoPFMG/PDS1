#include <stdio.h>
#include<locale.h>
int main(void)
{
setlocale(LC_ALL,"Portuguese");
int n=0;
int X0=0;
int X1=0;
int Xaux=0;
int apontador;
printf ("Escolha valores para:\n n:\nX0:\nX1:\n");
scanf("%d\n%d\n%d",&n,&X0,&X1);
   for(apontador=0;(apontador<=n);apontador++)
   {
   printf("X%d: %d\n",apontador,X0);
   Xaux=4*X1-2*X0;
   X0=X1;
   X1=Xaux;
   }      
}