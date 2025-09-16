#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char inserir[10]="Inserir";
char excluir[10]="Excluir";
char alterar[10]="Alterar";
char exibir[10]="Exibir";
struct agenda
{
    char nome[50];
    int idade;
    char numero[20];
};

int main()
{
    char programa[100];
    FILE *arquivo;
    scanf("%s",&programa[0]);
    arquivo= fopen(programa,"w+b");
    char teclado[100]="\0";
    struct agenda ctt[100];
    int contatos=0;
    int backup=0;
    for (contatos=0;contatos<100;contatos++)
    {
        ctt[contatos].nome[0]='\0';
    }
    contatos=0;
    while (scanf(" %s", &teclado[0])!=EOF)
    {
        
        teclado[strcspn(teclado,"\n")]='\0';
        if(strcmp(teclado,inserir)==0)
        {
            if (contatos<100)
            {
                for (contatos=0;contatos<100;contatos++)
                {
                    if (ctt[contatos].nome[0]=='\0')
                    {
                        scanf (" %s %d %s", &ctt[contatos].nome[0],&ctt[contatos].idade,&ctt[contatos].numero[0]);
                        printf("Registro %s %d %s inserido\n",ctt[contatos].nome,ctt[contatos].idade,ctt[contatos].numero);
                        backup++;
                        break;
                    }
                }  
            }
            else printf("Espaco insuficiente\n");    
        }
        else if(strcmp(teclado,excluir)==0)
        {
            scanf(" %s",&teclado[0]);
            teclado[strcspn(teclado,"\n")]='\0';
            for(contatos=0;contatos<100;contatos++)
            {
                if(strcmp(teclado,ctt[contatos].nome)==0)
                {   
                    printf("Registro %s %d %s excluido\n",ctt[contatos].nome,ctt[contatos].idade,ctt[contatos].numero);
                    ctt[contatos].nome[0]='\0';
                    ctt [contatos].idade=0;
                    ctt[contatos].numero[0]='\0';
                    backup--;
                    break;
                }
                else if(contatos==99) printf("Registro %s invalido\n",teclado);
            }
        }
        else if(strcmp(teclado,alterar)==0)
        {   
            scanf("%s",&teclado[0]);
            teclado[strcspn(teclado,"\n")]='\0';
            contatos=backup;
            for(contatos=0;contatos<backup;contatos++)
            {
                if(strcmp(teclado,ctt[contatos].nome)==0)
                {
                    scanf (" %s %d %s", &ctt[contatos].nome[0],&ctt[contatos].idade,&ctt[contatos].numero[0]);  
                    printf("Registro %s %d %s alterado\n",ctt[contatos].nome,ctt[contatos].idade,ctt[contatos].numero);
                }
            }
        }
        else if(strcmp(teclado,exibir)==0)
        {
            scanf("%s",&teclado[0]);
            teclado[strcspn(teclado,"\n")]='\0';
            contatos=backup;
            for(contatos=0;contatos<100;contatos++)
            {
                if(strcmp(teclado,ctt[contatos].nome)==0)
                {  
                    printf("Registro %s %d %s exibido\n",ctt[contatos].nome,ctt[contatos].idade,ctt[contatos].numero);
                    break;
                }
                else if(contatos==99) printf ("Registro %s invalido\n",teclado);
            }
        }
        contatos=backup;
    }
    for (contatos=0;contatos<backup;contatos++)
    {
        fprintf(arquivo,"%s %d %s\n",ctt[contatos].nome,ctt[contatos].idade,ctt[contatos].numero);
    } 
    fclose(arquivo);
}