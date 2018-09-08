#include<stdio.h>

int main(){
int horainicial=0,horafinal=0,resp=0,aux=0,aux2=0;
scanf("%d%d", &horainicial,&horafinal);

if(horainicial == horafinal){
	printf("O JOGO DUROU 24 HORA(S)\n");
}

if(horainicial > horafinal){
 aux = 24 - horainicial;
  aux2 = horafinal;
  resp = (aux + aux2);
  printf("O JOGO DUROU %d HORA(S)\n", resp);
}

if(horainicial<horafinal){

  aux = 24 - horainicial;
  aux2 = horafinal;
  resp = (aux + aux2)-24;
  printf("O JOGO DUROU %d HORA(S)\n", resp);
}

  return 0;
}