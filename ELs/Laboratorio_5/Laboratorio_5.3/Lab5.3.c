#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct contagem
{
   char marca [50];
   int numero;
   float media;
};

struct produtos
{
    char nome[50];
    char marca[50];
    float preco;
};

int main(void)
{
   struct produtos prod [8];
   int contador=0;
   int escrita=0;
   int repeticao=0;
   float media_total=0;
   struct contagem valores [8];
   for (contador=0;contador<8;contador++)
   {
    scanf(" %s %s %f", prod[contador].nome, prod[contador].marca, &prod[contador].preco);
    prod[contador].marca[strcspn(prod[contador].marca,"\n")]='\0';
    valores[contador].numero=1;
    strcpy(valores[contador].marca,"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0");
    valores[contador].media=0;
   }
   for (contador=0;contador<8;contador++)
   {
    int contador_aux=0;
    for(;contador_aux<8;contador_aux++)
    {
       if(!(strcmp(prod[contador].marca,valores[contador_aux].marca)))
       {
            repeticao++;
            break;
       }  
    }
    if (repeticao==0)
    {
        strcpy(valores[escrita].marca,prod[contador].marca);
        valores[escrita].media+=prod[contador].preco;
        for (contador_aux=(contador+1);contador_aux<8; contador_aux++)
        {
            if(!(strcmp(prod[contador_aux].marca,valores[escrita].marca)))
            {
                valores[escrita].numero++;
                valores[escrita].media+=prod[contador_aux].preco;
            }
        }
        escrita++;   
    }
    else repeticao=0;     
   }
  for (contador=0;((strcmp(valores[contador].marca,""))&&(contador<8));contador++)
  {
    printf("%s %d\n", valores[contador].marca, valores[contador].numero);
  }
  for (contador= 0;(valores[contador].media!=0)&&(contador<8); contador++)
  {
    media_total+=valores[contador].media;
  }
  media_total=(media_total/8);
  printf("media total %.2f\n", media_total);
  for (contador= 0;(valores[contador].media!=0)&&(contador<8); contador++)
  {
    valores[contador].media=valores[contador].media/valores[contador].numero;
    printf("media %s %.2f\n" ,valores[contador].marca, valores[contador].media);
  }
}