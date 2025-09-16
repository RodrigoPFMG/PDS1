#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[100];
    FILE *arquivo;
    scanf("%s",&nome[0]);
    arquivo= fopen(nome,"rb");
    int i,j;
    long int matriz1[5][5];
    long int matriz2[5][5];
    long int resposta[5][5];
    for (i=0;i<=4;i++)
    {
        for (j=0;j<=4;j++)
        {
            fscanf(arquivo,"%ld",&matriz1[i][j]);
        }    
    }
    for (i=0;i<=4;i++)
    {
        for (j=0;j<=4;j++)
        {
            fscanf(arquivo,"%ld",&matriz2[i][j]);
        }    
    }
    for (i=0;i<=4;i++)
    {
        for (j=0;j<=4;j++)
        {
            resposta[i][j]=matriz1[i][j]+matriz2[i][j];
            printf("%ld ",resposta[i][j]);
        }
      printf("\n");  
    }
    fclose(arquivo);
}