#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
char s[20];
setbuf(stdin, NULL);
fgets(s,20,stdin);
int tam = strlen(s);
s[tam-1]='\0';
int c1=0;
int c2=0;
char s1[3];
fgets(s1,3,stdin);
c1=s1[0];
char s2[3];
fgets(s2,3,stdin);
c2=s2[0];
int i;
for ( i = 0; i < (tam-2); i++)
{
    if ((int)s[i]==c1)
    {
        s[i]=(char)c2;
        printf("%s",s);
        break;
    } 
    else if(i==(tam-3))
    {
      printf("%s",s);
    }
    
}
}