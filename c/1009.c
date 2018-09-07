#include<stdio.h>
int main(){
	
	double salario,vendas,comissao,total;
	char nome[200];
	
	scanf("%s", nome);
	scanf("%lf", &salario);
	scanf("%lf", &vendas);
	
	comissao = (vendas*0.15);
	total = (comissao + salario);
	
	printf("TOTAL = R$ %.2lf\n", total);
	
	
}	