#include<stdio.h>
#include<math.h>

int main(){
	
		double constante,cubo,volume,entrada,bla;
		
		scanf("%lf", &entrada);
		cubo = pow(entrada,3);
		bla = 4/3.0;
		volume = cubo*bla*3.14159;
		printf("VOLUME = %.3lf\n", volume);
	return 0;
	
}	