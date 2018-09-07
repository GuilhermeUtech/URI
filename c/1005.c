#include<stdio.h>

int main(){
double var1,var2,nota1,nota2,resultado,resultadotruedatrue;

scanf("%lf%lf", &var1,&var2);
nota1 = (var1*0.35);
nota2 = (var2*0.75);

resultado = (nota1+nota2);
resultadotruedatrue = ((resultado*10)/11);

if (resultado > 10){
	printf("MEDIA = 10.00000\n");
} else {
	printf("MEDIA = %.5lf\n", resultadotruedatrue);
}
	
	return 0;
}