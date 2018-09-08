#include<stdio.h>

int main(){
	int cont=0,novoCalculo=0;
	float resp[2];
	float entradas=0,media=0;
	
	tokken:
	while(cont < 2){
		scanf("%f", &entradas);
		
		if(entradas >= 0 && entradas<=10){
			resp[cont] = entradas;
			cont++;
			if(cont == 2){
				media = (resp[0] + resp[1])/2;
				printf("media = %.2f\n", media);
				hehe:
					
				printf("novo calculo (1-sim 2-nao)\n");
				scanf("%d", &novoCalculo);
				

				
				if(novoCalculo == 1){
					cont = 0;
					goto tokken;
				} else if(novoCalculo == 2){
					goto final;
				} else {
					goto hehe;
				}
				
				
				
			}
		} else {
			printf("nota invalida\n");
		}
		
			
	}
		final:
	return 0;
}