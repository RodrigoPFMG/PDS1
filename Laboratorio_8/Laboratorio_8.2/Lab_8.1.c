#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void primos(int m, int *p1, int *p2)
{
    int contador;
    int cont_aux;
    int naoprimo=0;
    for (contador=m-1;contador>0;contador--)
    {
        naoprimo=0;
        for (cont_aux=2;cont_aux<contador/2;cont_aux++)
        {
            if (contador%cont_aux==0)
            {
                naoprimo=1;
                break;
            }
        }
        if (naoprimo==0) 
        {
            *p1=contador;
            break;
        }
    }
    for (contador=m+1;contador>0;contador++)
    {
        naoprimo=0;
        for (cont_aux=2;cont_aux<contador/2;cont_aux++)
        {
            if (contador%cont_aux==0)
            {
                naoprimo=1;
                break;
            }
        }
        if (naoprimo==0) 
        {
            *p2=contador;
            break;
        }
    }
}

int main(void)
{
  int m=0;
  int menor,maior =0;
  int *p1=&menor;
  int *p2=&maior;
  scanf("%d",&m);
  primos (m,p1,p2);
  printf("%d\n%d\n",menor,maior);
}