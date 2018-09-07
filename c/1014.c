#include<stdio.h>
int main(){
	int distancia;
	float combustivel,resposta;
	scanf("%d", &distancia);
	scanf("%f", &combustivel);
	
	resposta = distancia/combustivel;
	printf("%.3f km/l\n", resposta);
	
	
	return 0;
}