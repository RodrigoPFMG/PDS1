#include <stdio.h>
#include<stdlib.h>
int main(void)
{
   int linhas, colunas;
   scanf("%d\n", &linhas);
   scanf("%d\n", &colunas);
   int matriz[linhas][colunas];
   char linha[100];
   int oposta [linhas] [colunas];
   int i,j=0;
   int var=0;
   int aux=0;
   int negativo=0;
   for (i = 0; i < linhas; i++)
   {
      fgets(linha,sizeof linha,stdin);
      for (var = 0; var < 100; var++)
      {
         if (linha[var]!='\n')
         {
            if (linha[var]!=' ')
            {
               if (linha[var]=='-')
               {
                  negativo++;
               }
               else{
               aux=aux*10;
               aux+=(int)linha[var]-48;   
               }
            }
            else
            {
               if (!negativo)
               {
               matriz[i][j]=aux;
               j++;
               aux=0;
               }
               else
               {
                  matriz[i][j]=(-1)* aux;
                  j++;
                  aux=0; 
                  negativo=0;
               }

            }
         }
         else{
               if(!negativo)
               {
                  matriz[i][j]=aux;
                  aux=0;
                  j=0;
                  break;
               }
               else
               {
                  matriz[i][j]=(-1)*aux;
                  aux=0;
                  j=0;
                  break;
               }
            
         }
      }
      
   }
   for (i = 0; i < linhas; i++)
   {
    for ( j = 0; j < colunas; j++)
    {
      if ((i>0)&&(j==0))
        {
            oposta[i][j]=(matriz[i][j])*(-1);
            printf("\n%d ",oposta[i][j]); 
        }
        else 
        {
            oposta[i][j]=(matriz[i][j])*(-1);
            printf("%d ",oposta[i][j]);
        }
        
    } 
   }
}