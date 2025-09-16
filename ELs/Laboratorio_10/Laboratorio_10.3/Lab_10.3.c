#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void escreveVetor (int *p,int n)
{
    for (int i=0;i<n;i++) scanf("%d",&p[i]);
    return;
}

void somaVetores(int *p1, int*p2, int*p3, int n)
{
    for(int i=0;i<n;i++) p3[i]=p1[i]+p2[i];
}

int main()
{
   int n;
   scanf("%d", &n);
   int *p1;
   int *p2;
   int *p3;
   p1=(int *) malloc(n*sizeof(int));
   escreveVetor(p1,n);
   p2=(int *) malloc(n*sizeof(int));
   escreveVetor(p2,n);
   p3=(int *) malloc(n*sizeof(int));
   somaVetores (p1,p2,p3,n);
   for(int i=0;i<n;i++) printf("%d\n",p3[i]);
   free (p1);
   free (p2);
   free (p3);
}