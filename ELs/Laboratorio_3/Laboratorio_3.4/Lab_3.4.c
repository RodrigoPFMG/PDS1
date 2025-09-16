#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int alunos_1=0;
    int alunos_2=0;
    scanf("%d", &alunos_1);
    int AEDS1[alunos_1];
    int i;
    int iaux;
        for (i = 0; i < alunos_1; i++)
        {
            scanf("%d", &AEDS1[i]);    
        }
    scanf("%d", &alunos_2);    
    int CALC1[alunos_2];
        for (i = 0; i < alunos_2; i++)
        {
            scanf("%d", &CALC1[i]);    
        }
            for (i=0;i<alunos_1;i++)
            {
                for (iaux=0; iaux < alunos_2;iaux++)
                {
                    if (AEDS1[i]==CALC1[iaux])
                    {
                        printf("%d\n", AEDS1[i]);
                        break;
                    }
                    
                }    
            }
    
}