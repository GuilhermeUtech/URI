#include<stdio.h>
int main(){
	int cod1,cod2,numpec1,numpec2;
	float valor1,valor2,total1,total2,total;
	
	scanf("%d%d%f",&cod1,&numpec1,&valor1);
	scanf("%d%d%f",&cod2,&numpec2,&valor2);
	
	total1 = numpec1*valor1;
	total2 = numpec2*valor2;
	total = total1+total2;
	
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	
	
	return 0;
	
}