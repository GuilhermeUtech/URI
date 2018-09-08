#include<stdio.h>

int main(){
	
	int val[5];
	int i,numpar,par;
	for (i=0; i<5; i++){
		scanf("%d", &val[i]);
	}
	numpar =	 0;
	for (i=0; i<5; i++){
		par = val[i] % 2;
		
		if(par == 0){
			numpar = numpar+1;
		}
	}
	printf("%d valores pares\n", numpar);
	
	
	
	return 0;
}