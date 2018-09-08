#include<stdio.h>

int main(){

int i,k,a,aux;
a=7;
aux = a;

for(i=1; i<=9; i=i+2){
  for(k=1; k<=3; k++){
    printf("I=%d J=%d\n", i, a);
    a--;
  }
  aux = aux+2;;
  a = aux;
}
  return 0;
}