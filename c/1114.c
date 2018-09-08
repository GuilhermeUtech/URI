#include<stdio.h>

int main(){
	int a,senha,entrada;
	
	while(1){
		scanf("%d", &entrada);
		if(entrada != 2002){
			printf("Senha Invalida\n");
		} else {
			printf("Acesso Permitido\n");
			break;
		}
	}
	
	return 0;
}