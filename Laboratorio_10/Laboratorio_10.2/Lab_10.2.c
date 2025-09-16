#include <stdio.h>
#include <stdlib.h>

void preenche_matriz(int **matriz,int n, int colunas)
{
   for (int j = 0; j < colunas; j++)
   {
      scanf("%d",&matriz[n][j]);
   }
   return; 
}

int **cria_matriz(int linhas, int colunas)
{
   int ** matriz=NULL;  
   matriz=(int**)malloc(linhas * sizeof(int*));
   for (int i = 0; i < linhas; i++)
   {
      matriz[i]=(int*)malloc(colunas*sizeof(int));
      preenche_matriz(matriz,i,colunas);
   }
   return matriz;
}

void libera_matriz(int **matriz, int n_linhas, int n_colunas)
{
   for (int i = 0; i < n_linhas; i++)
   {
      free(matriz[i]);
   }
      free(matriz);
}

int main()
{
   int linhas,colunas;
   scanf("%d %d", &linhas, &colunas);
   int ** matriz = cria_matriz(linhas,colunas);
   for (int i = 0; i < linhas; i++)
   {
      for (int j = 0; j < colunas; j++)
      {
         printf("%d ", matriz[i][j]);
      }
      printf("\n");
   }
   libera_matriz(matriz,linhas,colunas);
   return 0;
}