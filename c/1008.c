	#include<stdio.h>
	int main(){
		int numero,numhoras;
		float valphora,salario;
		
		scanf("%d", &numero);
		scanf("%d", &numhoras);
		scanf("%f", &valphora);
		salario = (valphora*numhoras);
		
		printf("NUMBER = %d\n", numero);
		printf("SALARY = U$ %.2f\n", salario);
		
				return 0;
	}