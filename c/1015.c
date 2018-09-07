#include<stdio.h>
#include<math.h>

int main(){
	
	double x1,y1,x2,y2,aha,haha,resulta,tata,aux1,aux2;
	scanf("%lf%lf", &x1,&y1);
	scanf("%lf%lf", &x2,&y2);
	
	aux1 = (x2 - x1);
	aux2 = (y2-y1);
	
	aha = pow(aux1,2);
	haha = pow(aux2,2);
	tata = aha+haha;
	
	resulta = sqrt(tata);
	printf("%.4lf\n", resulta);
	
	
	
	return 0;
}