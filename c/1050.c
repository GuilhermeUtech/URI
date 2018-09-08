#include<stdio.h>

int main(){
	int entrada,v;
	scanf("%d", &entrada);
	v=0;	
	if(entrada == 11 || entrada == 19 || entrada == 21 || entrada == 27){
		if( entrada == 11){
			printf("Sao Paulo\n");
			v=1;
		} 
		if(entrada == 19){
			printf("Campinas\n");
			v=1;
		}
		if(entrada == 21){
			printf("Rio de Janeiro\n");
			v=1;
		}
		if(entrada == 27){
			printf("Vitoria\n");
			v=1;
		}
		
	}else{
	
	if(entrada == 31 || entrada == 32 || entrada == 61 || entrada == 71){
		if( entrada == 31){
			printf("Belo Horizonte\n");
			v=1;
		} 
		if(entrada == 32){
			printf("Juiz de Fora\n");
			v=1;
		}
		if(entrada == 61){
			printf("Brasilia\n");
			v=1;
		}
		if(entrada == 71){
			printf("Salvador\n");
			v=1;
		}
		
	}
	
	if(v!=1){
		printf("DDD nao cadastrado\n");
	}
	
} 	
	
	
	
	
	return 0;
}