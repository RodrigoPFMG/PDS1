#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void imprime(int vet[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",vet[i]);
    }
    printf("\n");
}
void multiplica(int vet[], int n, double v)
{
    for (int i = 0; i < n; i++)vet[i]*=v;
}

int main()
{
  int n=0;
  scanf("%d",&n);
  int vet[n];
  for(int i=0; i<n;i++) scanf("%d",&vet[i]);
  double multiplicador=0;
  scanf("%lf",&multiplicador);
  imprime(vet,n);
  multiplica(vet,n,multiplicador);
  imprime(vet,n);
  multiplica(vet,n,(1/multiplicador));
  imprime(vet,n);
}