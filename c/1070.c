#include<stdio.h>

int main(){
	int n,a,x,b,c,d,e,f;
	
	scanf("%d", &n);
	x = n % 2;
	if(x==0){
		a = n + 1;
		b = n + 3;
		c = n + 5;
		d = n + 7;
		e = n + 9;
		f = n + 11;
		
		printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
		
	} else {
		a = n+2;
		b = n+4;
		c = n+6;
		d = n+8;
		e = n+10;
		f= n+12;
			printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	}
	
	return 0;
}