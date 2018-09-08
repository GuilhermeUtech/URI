#include<stdio.h>

int main(){
	int i;
	double n[2];
	double aux,nota,a;
	while(i != 2){
		scanf("%lf", &a);
		if(a>=0 && a<=10){
			n[i] = a;
			i++;
		} else {
			printf("nota invalida\n");
		}
	}
	if(i == 2){
		aux = n[0] + n[1];
		
		nota = aux/2;
		printf("media = %.2lf\n", nota);
	}
	return 0;
}