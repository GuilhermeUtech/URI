#include<stdio.h>

int main(){
	int entrada[100];
	int i,n,m;
	
	for(i=0; i<100; i++){
		scanf("%d", &entrada[i]);
	}
	n = 0;
	m = 0;
	for(i=0; i<100; i++){
		if(entrada[i] > n){
			n = entrada[i];
			m = i;
		}
	}
	m = m+1;
	printf("%d\n", n);
	printf("%d\n", m);
	
	return 0;
}