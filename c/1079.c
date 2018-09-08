#include<stdio.h>

int main(){
int n,i;
float a,b,c,result;

scanf("%d", &n);

float vetor[n];
i=0;

while(i<n){
  scanf("%f%f%f", &a,&b,&c);
  result = (a*0.2)+(b*0.3)+(c*0.5);
  vetor[i] = result;
  i++;
}

for(i=0; i<n;i++){
  printf("%.1f\n", vetor[i]);
}
  return 0;
}
