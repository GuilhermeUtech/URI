#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b,resto,resto1;
	
	scanf("%d%d",&a,&b);
		resto1 =  a%b;
		resto = b%a;
		
	if(resto == 0 || resto1==0){
		printf("Sao Multiplos\n");
	} else{
		printf("Nao sao Multiplos\n");
	}
}