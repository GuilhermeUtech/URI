#include<stdio.h>
int main(){


	int n,horas,minutos,segundos,aux,m,bla,b;
	scanf("%d", &n);
	horas = (n/3600);
	aux = horas*3600;
	m = n-aux;
	minutos = (m/60);
	bla = minutos*60;
	b = m-bla;
	printf("%d:%d:%d\n",horas,minutos,b);
	


}