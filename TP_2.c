#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int tamanho=0;
struct data
{
    char codigo[9];
    char nome [50];
    int quantidade;
    float preco;
    char estado [5];
};

void ordenador( struct data produtos[], int numero)
{
    struct data produtos_ord;
    for (int i=0;i<numero;i++)
    {
        for (int j=0;j<numero;j++)
        {
            if(strcmp(produtos[i].nome,produtos[j].nome)<0)
            {
                produtos_ord =produtos[i];
                produtos[i] = produtos[j];
                produtos[j] = produtos_ord;
            }
        }   
    }
    return;   
}

void relatorio(char saida [20],struct data produtos[])
{
    int numero=tamanho;
    FILE *arq;
    arq = fopen(saida,"w");
    ordenador(produtos, numero);
    for (int i = 0; i < tamanho; i++)
    {
        fprintf(arq,"%s\n%s\n%d\n%0.2f\n%s\n",produtos[i].codigo,produtos[i].nome,produtos[i].quantidade,produtos[i].preco,produtos[i].estado);
    }
    fclose(arq);
    return ;
}

void pesquisa_produto(char codigo [6],struct data produtos[])
{
    for (int i = 0; i < tamanho; i++)
    {
        if (!(strcmp(produtos[i].codigo,codigo)))
        {
            printf("%s\n%s\n%d\n%0.2f\n%s\n",produtos[i].codigo,produtos[i].nome,produtos[i].quantidade,produtos[i].preco,produtos[i].estado);
            break;
        }
    }
    return ;
}

void menor_estoque(struct data produtos[])
{
    int endereco=0;
    int valor=produtos[0].quantidade;
    int novo=0;
    for (int i=0; i < tamanho; i++)
    {
        novo= produtos[i].quantidade;
        if (novo<valor) 
        {
            valor=novo;
            endereco=i;
        }    
    }
    printf("%s\n%s\n%d\n%0.2f\n%s\n",produtos[endereco].codigo,produtos[endereco].nome,produtos[endereco].quantidade,produtos[endereco].preco,produtos[endereco].estado);
    return ;
}

void listar_estado(char estado [2],struct data produtos[])
{
    int i;
    int tamanho_estado=0;
    for (i=0; i < tamanho; i++)
    {
         if (!(strcmp(produtos[i].estado,estado))) tamanho_estado++;   
    }
    struct data produtos_estado[tamanho_estado];
    int aux=0;
    for (i=0;i<tamanho;i++)
    {
        if (!(strcmp(produtos[i].estado,estado))) 
        {
            strcpy(produtos_estado[aux].codigo,produtos[i].codigo);
            strcpy(produtos_estado[aux].nome,produtos[i].nome);
            produtos_estado[aux].quantidade=produtos[i].quantidade;
            produtos_estado[aux].preco=produtos[i].preco;
            strcpy(produtos_estado[aux].estado,produtos[i].estado);
            aux++;
        }
    }
    aux=0;
    ordenador(produtos_estado, tamanho_estado);
    for (i=0;i<tamanho_estado;i++)
    {
       printf("%s\n%s\n%d\n%0.2f\n%s\n",produtos_estado[aux].codigo,produtos_estado[aux].nome,produtos_estado[aux].quantidade,produtos_estado[aux].preco,produtos_estado[aux].estado); 
       aux++;
    }
    return ;
}

void menor_estado(char estado [2],struct data produtos[])
{
    int endereco;
    int valor=0;
    int novo=0;
    int i;
    for (i=0;i<tamanho;i++)
    {
        if (!(strcmp(produtos[i].estado,estado))) 
        {
            valor=produtos[i].quantidade;
            endereco=i;
            break;
        }
    }   
    for (i=endereco+1; i<tamanho; i++)
    {
       if (!(strcmp(produtos[i].estado,estado))) 
        {
            novo=produtos[i].quantidade;
            if (novo<valor) 
            {
                valor=novo;
                endereco=i;
            }    
        } 
    }
    printf("%s\n%s\n%d\n%0.2f\n%s\n",produtos[endereco].codigo,produtos[endereco].nome,produtos[endereco].quantidade,produtos[endereco].preco,produtos[endereco].estado);
    return ;
}
void quantidade(struct data produtos[])
{
    int sum =0;
    for (int i=0;i<tamanho;i++)
    {
        sum+=produtos[i].quantidade;
    }
    printf("%d",sum);
    return ;
}

int main(int argc, char *argv[])
{
    FILE *arquivo;
    arquivo = fopen(argv[1],"r");
    fscanf(arquivo,"%d",&tamanho);
    struct data produtos [tamanho];
    char lixo[100];
    fgets(lixo,10,arquivo); 
    for (int i = 0; i < tamanho; i++)
    {
        fgets(produtos[i].codigo,9,arquivo);
        produtos[i].codigo[strcspn(produtos[i].codigo,"\n")]='\0';
        produtos[i].codigo[strcspn(produtos[i].codigo,"\r")]='\0';
        fgets(produtos[i].nome,50,arquivo);
        produtos[i].nome[strcspn(produtos[i].nome,"\n")]='\0';
        produtos[i].nome[strcspn(produtos[i].nome,"\r")]='\0';
        fscanf(arquivo,"%d", &produtos[i].quantidade);
        fgets(lixo,10,arquivo);
        fscanf(arquivo,"%f", &produtos[i].preco);
        fgets(lixo,10,arquivo);
        fgets(produtos[i].estado,5,arquivo);
        produtos[i].estado[strcspn(produtos[i].estado,"\n")]='\0';
        produtos[i].estado[strcspn(produtos[i].estado,"\r")]='\0';
    }
    switch ((*argv[2]-48))
    {
    case 1:
        relatorio(argv[3],produtos); 
        break;
    case 2:
        pesquisa_produto(argv[3],produtos);
        break;
    case 3:
        menor_estoque(produtos);
        break;
    case 4:
        listar_estado(argv[3],produtos);
        break;
    case 5:
        menor_estado(argv[3],produtos);
        break;
    case 6:
        quantidade(produtos);
        break;
    }
    fclose(arquivo);
}