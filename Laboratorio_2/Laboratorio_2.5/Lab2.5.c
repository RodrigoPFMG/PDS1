#include <stdio.h>
int main(void)
{
printf("Qual é o valor de n?\n");
int n=0;
scanf ("%d",&n);
int i;
int resultado=n;
for (i=0;i<n;i++)
    {
        resultado=resultado+i;
    }
printf("%d",resultado);
}