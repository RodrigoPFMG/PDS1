#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void media (double*vet, int n ,int *i)
{   
    double sum=0;
    double med=0;
    int contador_aux=0; 
    float analise=0;
    int retorno=0;
    for (;contador_aux<n;contador_aux++)
    {
        sum+=*vet;
        vet++;
    }
    med=(sum/n);
    vet--;
    analise=*vet;
    for (contador_aux=n-1;contador_aux>=0;contador_aux--)
    {
        if (abs((*vet-med))<=abs((analise-med)))
        {
            analise=*vet;
            retorno=contador_aux;
        }
        vet--;
    }
    *i=retorno;
}

int main(void)
{
    int n=0;
    int resultado=0;
    int *i;
    i= &resultado;
    scanf("%d",&n);
    double vetor[n];
    for (int contador=0; contador < n; contador++) scanf("%lf",&vetor[contador]); 
    media(vetor, n, i);
    printf("%d",resultado);
}