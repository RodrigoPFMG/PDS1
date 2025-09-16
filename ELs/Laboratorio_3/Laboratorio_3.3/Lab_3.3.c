#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int vetor[10];
    int vetor_invertido[10];
    int i;
    int i_inv=9;
    for (i=0;i<=9;i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (i=0;i<=9;i++)
    {
        vetor_invertido[i]=vetor[i_inv];
        i_inv--;
    }
    for (i=0;i<=9;i++)
    {
        printf("%d\n",vetor_invertido[i]);
    }
    
}