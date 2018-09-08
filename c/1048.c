#include<stdio.h>
#include<math.h>

int main(){
	
	double salario,salarioreajuste,reajuste;
	scanf("%lf", &salario);
	
	if(salario >= 0 && salario<=400){
		reajuste = salario*0.15;
		salarioreajuste = salario + reajuste;
		//printf("%lf", salarioreajuste);
		printf("Novo salario: %.2lf\n", salarioreajuste);
		printf("Reajuste ganho: %.2lf\n",reajuste);
		printf("Em percentual: 15 %%\n");
	}
	
	if(salario > 400 && salario<=800){
		reajuste = salario*0.12;
		salarioreajuste = salario + reajuste;
		//printf("%lf", salarioreajuste);
		printf("Novo salario: %.2lf\n", salarioreajuste);
		printf("Reajuste ganho: %.2lf\n",reajuste);
		printf("Em percentual: 12 %%\n");
	}
	
	if(salario > 800 && salario<=1200){
		reajuste = salario*0.10;
		salarioreajuste = salario + reajuste;
		//printf("%lf", salarioreajuste);
		printf("Novo salario: %.2lf\n", salarioreajuste);
		printf("Reajuste ganho: %.2lf\n",reajuste);
		printf("Em percentual: 10 %%\n");
	}
	if(salario > 1200 && salario<=2000){
		reajuste = salario*0.07;
		salarioreajuste = salario + reajuste;
		//printf("%lf", salarioreajuste);
		printf("Novo salario: %.2lf\n", salarioreajuste);
		printf("Reajuste ganho: %.2lf\n",reajuste);
		printf("Em percentual: 7 %%\n");
	}
	
	if(salario > 2000){
		reajuste = salario*0.04;
		salarioreajuste = salario + reajuste;
		//printf("%lf", salarioreajuste);
		printf("Novo salario: %.2lf\n", salarioreajuste);
		printf("Reajuste ganho: %.2lf\n",reajuste);
		printf("Em percentual: 4 %%\n");
	}
	
	return 0;
}