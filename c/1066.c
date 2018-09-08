#include<stdio.h>

int main(){
	int entrada[5];
	int positivo,negativo,impar,par,i;
	positivo = 0;
	negativo =0;
	impar = 0;
	par = 0;
	
	for(i=0; i<5;i++){
		scanf("%d", &entrada[i]);
	}
	
	for(i=0; i<5;i++){
		if(entrada[i] % 2 == 0){
			par++;
		} else {
			impar++;
		}
		
		if(entrada[i] > 0){
			positivo++;
		}
		if(entrada[i] < 0){
			negativo++;
		}
	}
	
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par,impar,positivo,negativo);
	
	
	
	return 0;
}