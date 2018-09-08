#include<stdio.h>

int main(){
  int a=0,b=0;
int n=1,gremio=0,inter=0,empate=0,grenais=0;


while(n != 2){
scanf("%d%d", &a,&b);


if(a==b){
  empate++;
} else if(a>b){
  inter++;
} else if(b>a){
  gremio++;
}

printf("Novo grenal (1-sim 2-nao)\n");
scanf("%d", &n);

}

grenais = inter+gremio+empate;

printf("%d grenais\n", grenais);
printf("Inter:%d\n",inter);
printf("Gremio:%d\n",gremio);
printf("Empates:%d\n",empate);

if(inter == gremio){
  printf("Nao houve vencedor\n");
} else if(gremio>inter){
  printf("Gremio venceu mais\n");
} else if(inter>gremio){
  printf("Inter venceu mais\n");
}



  return 0;
}