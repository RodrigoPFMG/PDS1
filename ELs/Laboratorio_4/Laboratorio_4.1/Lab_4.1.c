#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
 char s1[20];
 char s2[20];
 int var1;
 int var2;
 setbuf(stdin, NULL);
 fgets(s1,20,stdin);
 fgets(s2,20,stdin);
 var1=strlen(s1);
 var2=strlen(s2);
 s1[(var1-1)]='\0';
 s2[(var2-1)]='\0';
 strcat(s1,s2);
 printf("%s",s1);
}