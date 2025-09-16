#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
  int num_jogos=0;                                                                // inicialização de variáveis
  int tamanho=0;          
  scanf("%d", &num_jogos);
  int num_jogadas=0;
  int contador_jogadas=0;
  int contador_de_jogos=0;
  int linha=0;
  int linha_aux=0;
  int coluna=0;
  int coluna_aux=0;
  int derrota=0; 
  int var=0;
  int incompleto=0;
  int bomba_ao_redor=0;
  for(contador_de_jogos=1;contador_de_jogos<=num_jogos;contador_de_jogos++)      //inicia os jogos
  {
    fflush(stdin);
    scanf(" %d\n", &tamanho);
    fflush(stdin);
    char tabuleiro[tamanho][tamanho];
    char teclado[201];
    for (linha= 0; linha<tamanho; linha++)
    {
      fgets(teclado,sizeof teclado,stdin);
      for (var = 0; var < 200; var++)
      {
        if ((teclado[var]!='\n')&&(teclado[var]!=' '))
        {
          tabuleiro[linha][coluna]=teclado[var];
          coluna++;
        }
        if (coluna==tamanho)break;   
      }  
      coluna=0; 
    }
    scanf(" %d", &num_jogadas);
    for (contador_jogadas=1;contador_jogadas<=num_jogadas;contador_jogadas++)
    {
      scanf(" %d %d", &linha, &coluna);
      linha_aux=linha;
      coluna_aux=coluna;
      if(((tabuleiro[linha][coluna])=='b')) derrota=1;
      else if(tabuleiro[linha][coluna]=='x')
      {
        for (linha=(linha_aux-1); linha<=(linha_aux+1);linha++)
        {
          for (coluna=(coluna_aux-1); coluna <= (coluna_aux+1);coluna++)
          {
            if (((linha>=tamanho)||(linha<0))||((coluna>=tamanho)||(coluna<0)))
            {
              continue;
            }
            else if ((tabuleiro[linha][coluna]=='b'))
            {
              bomba_ao_redor=1;
              break;
            } 
          }
          if (bomba_ao_redor==1) break;    
        } 
      }    
      if ((bomba_ao_redor==0)&&(tabuleiro[linha_aux][coluna_aux]=='x'))
      {
        for (linha=(linha_aux-1); linha<=(linha_aux+1);linha++)
        {
          for (coluna=(coluna_aux-1); coluna <= (coluna_aux+1);coluna++)
          {
            if (((linha>=tamanho)||(linha<0))||((coluna>=tamanho)||(coluna<0)))
            {
              continue;
            }
            else tabuleiro[linha][coluna]='O'; 
          }     
        }  
      }
      else if ((bomba_ao_redor==1)&&(tabuleiro[linha_aux][coluna_aux]=='x'))
      {
        tabuleiro[linha_aux][coluna_aux]='O';
      } 
      bomba_ao_redor=0;
      if(contador_jogadas==num_jogadas)
      {
        for ( linha = 0; linha<= (tamanho-1); linha++)
        {
          for ( coluna = 0; coluna<= (tamanho-1); coluna++)
          {
            if (tabuleiro[linha][coluna]=='x')
            {
              incompleto=1;
              break;
            }   
          } 
        }        
      } 
    }   
    if (derrota==1) printf("PERDEU\n");
    else if (incompleto==1) printf("FALTOU TERMINAR\n");
    else printf("GANHOU\n");
    derrota=0;
    incompleto=0;
    coluna=0;
  }
}
