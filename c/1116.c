#include<stdio.h>

int main(){
	int i,n,a,b;
	double aux;
		
	scanf("%d", &n);	
	
	for(i=0; i<n; i++){
		scanf("%d%d", &a,&b);
		if(b == 0){
			printf("divisao impossivel\n");
		} 
		if(b != 0){
			
			aux = a/(b*1.00);
			
			printf("%.1lf\n", aux);
		}
	} 
 	return 0;
}