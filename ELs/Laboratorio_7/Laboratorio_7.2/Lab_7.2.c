#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[100];
    FILE *arquivo;
    char letra;
    int repeticoes=0;
    scanf("%s",&nome[0]);
    arquivo= fopen(nome,"rb");
    do
    {
        letra= fgetc(arquivo);
        if (letra=='a')
        {
            repeticoes++;
        }   
    } while (letra!=EOF);
    printf("%d",repeticoes);
    fclose(arquivo);
}