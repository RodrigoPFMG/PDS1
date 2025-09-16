#include <stdio.h>
#include<locale.h>
int main(void)
{
setlocale(LC_ALL,"Portuguese");
printf("Escreva 3 valores inteiros\n");
int x=0;
int y=0;
int z=0;
scanf("%d\n %d\n %d" ,&x,&y,&z);
if ((x%y==0)&&(x%z==0))
{
    printf("O número é divisível");
}
else
{
    printf("O número não é divisível");
}
}