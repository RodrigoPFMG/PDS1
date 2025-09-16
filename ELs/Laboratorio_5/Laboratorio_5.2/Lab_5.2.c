#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char inserir [10]="inserir";
char mostrar [10]="mostrar";
char alterar [10]="alterar";
struct endereco
{
    char rua [50];
    unsigned int numero;
    char estado [50];  
};

struct dados
{
    char nome[50];
    unsigned int idade;
    float salario;
    struct endereco end;
};
int main(void)
{
    int contador_de_cadastros;
    struct dados cad[6];
    char teclado[100]="";
    int tamanho,contador=0;
    for (contador_de_cadastros=0;contador_de_cadastros<5;contador_de_cadastros++)
    {
      fflush(stdin);
      scanf(" %s", &teclado[0]);
      teclado[strcspn(teclado,"\n")]='\0';
      if(!(strcmp(inserir,teclado)))
      {
        scanf(" %s %u %f %s %u %s", cad[contador_de_cadastros].nome, &cad[contador_de_cadastros].idade, &cad[contador_de_cadastros].salario, cad[contador_de_cadastros].end.rua, &cad[contador_de_cadastros].end.numero, cad[contador_de_cadastros].end.estado);
        printf ("Registro %s %u %.2f %s %u %s inserido\n", cad[contador_de_cadastros].nome, cad[contador_de_cadastros].idade, cad[contador_de_cadastros].salario, cad[contador_de_cadastros].end.rua, cad[contador_de_cadastros].end.numero, cad[contador_de_cadastros].end.estado);
      }
      else if (!(strcmp(mostrar,teclado)))
      {
        scanf(" %s", &teclado[0]); 
        teclado[strcspn(teclado,"\n")]='\0';
        for (contador=0;contador<5;contador++)
        {
           if (!(strcmp(cad[contador].nome,teclado)))
           {
             printf ("Registro %s %u %.2f %s %u %s\n", cad[contador].nome, cad[contador].idade, cad[contador].salario, cad[contador].end.rua,cad[contador].end.numero, cad[contador].end.estado);
             contador_de_cadastros--;
             break;
           }
           else
           {
             if(contador==4)
             {
                printf("Registro ausente\n");
                contador_de_cadastros --;
             }
           }
        }   
      }
      else if (!(strcmp(alterar,teclado)))
      {
        scanf(" %s %u %f %s %u %s", cad[5].nome, &cad[5].idade, &cad[5].salario, cad[5].end.rua, &cad[5].end.numero, cad[5].end.estado);
        for (contador= 0; contador <5; contador++)
        {
            if (!(strcmp(cad[contador].nome,cad[5].nome)))
            {
                cad[contador]=cad[5];
                contador_de_cadastros--;
                printf ("Registro %s %u %.2f %s %u %s alterado\n", cad[5].nome, cad[5].idade, cad[5].salario, cad[5].end.rua, cad[5].end.numero, cad[5].end.estado);
                break;
            }
            else if (contador==4)
            {
                printf("Registro ausente para alteracao\n");
                contador_de_cadastros--;
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
            for (contador=0;contador<5;contador++)
            {
              if (!(strcmp(cad[contador].nome,teclado)))
              {
                printf ("Registro %s %u %.2f %s %u %s\n", cad[contador].nome, cad[contador].idade, cad[contador].salario, cad[contador].end.rua,cad[contador].end.numero, cad[contador].end.estado);
                break;
              }
              else
              {
                if(contador==4)
                {
                printf("Registro ausente\n");
                }
              }
            }   
        }
        else if (!(strcmp(alterar,teclado)))
        {
            scanf(" %s %u %f %s %u %s", cad[5].nome, &cad[5].idade, &cad[5].salario, cad[5].end.rua, &cad[5].end.numero, cad[5].end.estado);
            for (contador= 0; contador <5; contador++)
            {
             if (!(strcmp(cad[contador].nome,cad[5].nome)))
             {
                cad[contador]=cad[5];
                contador_de_cadastros--;
                printf ("Registro %s %u %.2f %s %u %s alterado\n", cad[5].nome, cad[5].idade, cad[5].salario, cad[5].end.rua, cad[5].end.numero, cad[5].end.estado);
                break;
             }
                else if (contador==4)
                {
                    printf("Registro ausente para alteracao\n");
                    contador_de_cadastros--;
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