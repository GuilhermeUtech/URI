#include<stdio.h>
#include<math.h>

int main(){
	int i;
	 long int n, quadrado, cubo;
	
	scanf("%ld", &n);
		
	for(i=1; i<(n+1); i++){
		quadrado = pow(i,2);
		cubo = pow(i,3);
		printf("%ld %ld %ld\n", i,quadrado,cubo);
	}
	
	return 0;
}