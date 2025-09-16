#include <stdio.h>
#include<locale.h>
int main(void)
{
setlocale(LC_ALL,"Portuguese");
int x=233;
do{
    printf("%d\n",x);
    x=x+5;
}while (x<300);
do{
    printf("%d\n",x);
    x=x+3;
}while(x<400);
do{
    printf("%d\n",x);
    x=x+5;
}while (x<458);
}