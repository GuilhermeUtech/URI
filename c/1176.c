#include<stdio.h>

void calcula_fib(int a);
int main(void){
	int n,i;
	scanf("%d", &n);
	int vetor[n];

	for(i=0; i<n; i++){
		scanf("%d", &vetor[i]);
	}

	for(i=0; i<n; i++){
		calcula_fib(vetor[i]);
	}

	return 0;
}

void calcula_fib(int a){
	int i;
	int anterior = 0;
	int atual = 1;
	int proximo;
	if(a == 0){
		printf("Fib(%d) = 0\n",a);
		return;
	} else if(a == 1){
		printf("Fib(%d) = 1\n", a);
		return 	;
	}

	for(i=0; i<(a-1); i++){
		
		proximo = anterior + atual;
		anterior = atual;
		atual = proximo;
	}
	printf("Fib(%d) = %d\n",a,atual);
}