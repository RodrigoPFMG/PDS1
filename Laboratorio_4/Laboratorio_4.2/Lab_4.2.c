#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
 char s1[20];
 setbuf(stdin, NULL);
 fgets(s1,20,stdin);
 int tam = strlen(s1);
 s1[tam-1]='\0';
 tam-=1;
 char s2[20]="";
 int i;
 int aux=(tam-1);
 for(i=0;i<tam;i++)
 {
   s2[i]=s1[aux];
   aux--; 
 }
 printf("%s", s2);
 }