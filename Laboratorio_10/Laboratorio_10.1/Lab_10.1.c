#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void escreveVetor (int *p,int n)
{
    for (int i=0;i<n;i++) scanf("%d",&p[i]);
    return;
}

int main()
{
   int n;
   scanf("%d", &n);
   int *p;
   p=(int *) malloc(n*sizeof(int));
   escreveVetor(p,n);
   for(int i=0;i<n;i++) printf("%d\n",p[i]);
   free (p);
}

