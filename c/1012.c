#include<stdio.h>
#include<math.h>

int main(){
	
		double a,b,c,ac,circ,trapezioabc,quadb,retab;
		scanf("%lf", &a);
		scanf("%lf", &b);
		scanf("%lf", &c);
		
		ac = ((a*c)/2);
		circ = (3.14159* pow(c,2));
		trapezioabc = (((a+b)*c)/2);
		quadb = pow(b,2);
		retab = (a*b);
		
		printf("TRIANGULO: %.3lf\n", ac);
		printf("CIRCULO: %.3lf\n", circ);
		printf("TRAPEZIO: %.3lf\n", trapezioabc);
		printf("QUADRADO: %.3lf\n", quadb);
		printf("RETANGULO: %.3lf\n", retab);
	return 0;
	
}