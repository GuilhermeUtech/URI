#include<stdio.h>

int main(){
	int cod,quant;
	float total,dog,salada,bacon,torrada,refri;
	
	scanf("%d",&cod);
	scanf("%d", &quant);
	
	dog = 4.00;
	salada = 4.50;
	bacon = 5.00;
	torrada = 2.00;
	refri = 1.50;
	
	if(cod == 1){
		total = dog*quant;
		printf("Total: R$ %.2f\n", total);
	}
	if(cod == 2){
		total = salada*quant;
		printf("Total: R$ %.2f\n", total);
	}
	if(cod == 3){
		total = bacon*quant;
		printf("Total: R$ %.2f\n", total);
	}
	if(cod == 4){
		total = torrada*quant;
		printf("Total: R$ %.2f\n", total);
	}
	if(cod == 5){
		total = refri*quant;
		printf("Total: R$ %.2f\n", total);
	}
	
	
	return 0;
}