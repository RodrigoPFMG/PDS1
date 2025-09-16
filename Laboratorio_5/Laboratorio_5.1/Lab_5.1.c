#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char inserir [10]="inserir";
char mostrar [10]="mostrar";
struct dados
{
    char nome[50];
    unsigned int idade;
    float salario;
};
int main(void)
{
    int contador_de_cadastros;
    struct dados cad[4];
    char teclado[100]="";
    int tamanho,contador=0;
    for (contador_de_cadastros=0;contador_de_cadastros<4;contador_de_cadastros++)
    {
      fflush(stdin);
      scanf(" %s", &teclado[0]);
      teclado[strcspn(teclado,"\n")]='\0';
      if(!(strcmp(inserir,teclado)))
      {
        scanf(" %s %u %f", cad[contador_de_cadastros].nome, &cad[contador_de_cadastros].idade, &cad[contador_de_cadastros].salario);
        printf ("Registro %s %u %.2f inserido\n", cad[contador_de_cadastros].nome, cad[contador_de_cadastros].idade, cad[contador_de_cadastros].salario);
      }
      else if (!(strcmp(mostrar,teclado)))
      {
        scanf(" %s", &teclado[0]); 
        teclado[strcspn(teclado,"\n")]='\0';
        for (contador=0;contador<4;contador++)
        {
           if (!(strcmp(cad[contador].nome,teclado)))
           {
             printf ("Registro %s %u %.2f\n", cad[contador].nome, cad[contador].idade, cad[contador].salario);
             contador_de_cadastros--;
             break;
           }
           else
           {
             if(contador==3)
             {
                printf("Registro ausente\n");
                contador_de_cadastros --;
             }
           }
        }   
      }        
    }
    while((scanf(" %s", &teclado[0]) != EOF))
    {
        teclado[strcspn(teclado,"\n")]='\0';
        if (!(strcmp(mostrar,teclado)))
        {
            scanf(" %s",&teclado[0]);
            teclado[strcspn(teclado,"\n")]='\0';
            for (contador=0;contador<4;contador++)
            {
              if (!(strcmp(cad[contador].nome,teclado)))
              {
                printf ("Registro %s %u %.2f\n", cad[contador].nome, cad[contador].idade, cad[contador].salario);
                break;
              }
              else
              {
                if(contador==3)
                {
                printf("Registro ausente\n");
                }
              }
            }   
        }
        else
        {
            if (!(strcmp(inserir,teclado)))
            {
                printf("Espaco insuficiente\n");
            }   
        }
    }      
}