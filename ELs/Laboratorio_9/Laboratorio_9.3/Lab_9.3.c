#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct iris
{
    double comprimento_s;
    double largura_s;
    double comprimento_p;
    double largura_p;
    char tipo[50];
};

void classificar(struct iris analise, struct iris flores[],int n)
{
    double distancia[n];
    for (int i = 0; i < n; i++)
    {
        double soma=0;
        soma+=pow((analise.comprimento_s-(flores[i].comprimento_s)),2);
        soma+=pow((analise.largura_s-(flores[i].largura_s)),2);
        soma+=pow((analise.comprimento_p-(flores[i].comprimento_p)),2);
        soma+=pow((analise.largura_p-(flores[i].largura_p)),2);
        soma=sqrt(soma);
        distancia[i]=soma;
    }
    int menor=0;
    for (int i=1;i<n;i++)
    {
      if ((distancia[menor]-distancia[i])>0) 
      {
        menor= i;
      }
    }
    printf("%s",flores[menor].tipo);

}

int main()
{
  int n=0;
  scanf("%d",&n);
  struct iris flores[n];
  for (int i = 0; i < n; i++)
  {
    scanf(" %lf %lf %lf %lf %s",&flores[i].comprimento_s,&flores[i].largura_s,&flores[i].comprimento_p,&flores[i].largura_p,flores[i].tipo);
  }
  struct iris analise;
  scanf(" %lf %lf %lf %lf", &analise.comprimento_s,&analise.largura_s,&analise.comprimento_p,&analise.largura_p);
  classificar(analise,flores,n);
}