#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
char s1[50]="";
char s2[50]="";
setbuf(stdin, NULL);
fgets(s1,50,stdin);
int tam1 = strlen(s1);
s1[tam1-1]='\0';
fgets(s2,50,stdin);
int tam2 = strlen(s2);
s2[tam2-1]='\0';
int i;
int aux;
int var;
int resultado=0;
for ( i = 0; i < (tam1-2); i++)
{
    if(s2[0]==s1[i])
    {   
        var=(i+1);
        for (aux=1; aux<(tam2-1); aux++)
        {
            if (s2[aux]==s1[var])
            {
                var++;
                if (aux==(tam2-2))
                {
                    printf("É substring");
                    resultado=1;
                }     
            }
            else 
            {
                break;
            }      
        }
    }  
}
if (resultado==0)
{
    printf("Não é substring");
}
}