#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
int escolhajogador,escolhacomputador;
srand(time(0));

printf("***-JOGO DE JOKEMPÔ-***\n");
printf("Escolha uma opção:\n");
printf("1- Pedra\n");
printf("2- Papel\n");
printf("3- Tesoura\n");
printf("Escolha:\n");
scanf("%d", &escolhajogador);

escolhacomputador = rand() % 3 + 1;
printf("\n");
switch (escolhajogador)
{
case 1 :
  printf("Jogador: Pedra -");
    break;
case 2 :
  printf("Jogador: Papel -");
    break;
    case 3 :
  printf("Jogador: Tesoura -");
    break;
default:
printf("Opção inválida\n");
    break;
}


switch (escolhacomputador)
{
case 1 :
  printf(" Computador: Pedra ");
    break;
case 2 :
  printf(" Computador: Papel ");
    break;
    case 3 :
  printf(" Computador: Tesoura ");
    break;
default:
    break;
}
printf("\n");
if (escolhajogador == escolhacomputador)
{
   printf("***EMPATE***\n");
}else if(escolhajogador == 1 && escolhacomputador == 2)
{printf("***Computador venceu***\n");
}else if(escolhajogador == 1 && escolhacomputador == 3)
{
printf("***Jogador venceu***\n");
}else if(escolhajogador == 2 && escolhacomputador == 1)
{
printf("***Jogador venceu***\n");
}else if(escolhajogador == 2 && escolhacomputador == 3)
{
printf("***Computador venceu***\n");
}else if(escolhajogador == 3 && escolhacomputador == 1)
{printf("***Compputador venceu***\n");
}else if(escolhajogador == 3 && escolhacomputador == 2)
{
printf("***Jogador venceu***\n");
}


return 0;
}