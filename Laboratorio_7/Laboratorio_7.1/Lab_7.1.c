#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    FILE *arquivo;
    char letra;
    int repeticoes=0;
    arquivo = fopen(argv[1],"r");
    do
    {
        letra= fgetc(arquivo);
        if (letra=='a')
        {
            repeticoes++;
        }   
    } while (letra!=EOF);
    printf("%d",repeticoes);
    fclose;
}

