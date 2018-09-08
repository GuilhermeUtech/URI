#include<stdio.h>

int main(){
	int alcool,gasolina,diesel,entrada;
	alcool = 0;
	gasolina = 0;
	diesel = 0;
	while(entrada != 4){
		
		scanf("%d", &entrada);
		if(entrada == 1){
			alcool++;
		}
		if(entrada == 2){
			gasolina++;
		}
		if(entrada == 3){
			diesel++;
		}
	}
	
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alcool,gasolina,diesel);
	return 0;
}