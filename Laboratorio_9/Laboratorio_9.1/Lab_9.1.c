#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum meses{janeiro=1, fevereiro=2, marco=3, abril=4, maio=5, junho=6, julho=7, agosto=8, setembro=9, outubro=10, novembro=11, dezembro=12};
struct Data
{
    int dia;
    int mes;
    int ano;
};
struct Evento
{
    char nome[100];
    char local[100];
    struct Data data;
};

void cadastrar_eventos(int n, struct Evento eventos[])
{
    for(int i=0; i<n; i++)
    {
        scanf( "%s %s %d %d %d", eventos[i].nome, eventos[i].local, &eventos[i].data.dia, &eventos[i].data.mes, &eventos[i].data.ano);
    }
}

void imprimir_eventos(int n, struct Data data,struct Evento eventos[])
{
    int impressao=0;
    for(int i=0;i<n;i++)
    {
        if(eventos[i].data.dia==data.dia)
        {
            if(eventos[i].data.mes==data.mes)
            {
                if(eventos[i].data.ano==data.ano)
                {
                    printf("%s %s\n", eventos[i].nome,eventos[i].local);
                    impressao=1;
                }
            }
        }
    }
    if((impressao==0)||n==0) printf("Nenhum evento encontrado!");
}

int main()
{
    int n;
    scanf("%d", &n);
    struct Evento eventos[n];
    cadastrar_eventos(n,eventos);
    struct Data data;
    scanf("%d %d %d",&data.dia,&data.mes,&data.ano);
    imprimir_eventos(n,data,eventos);
}

