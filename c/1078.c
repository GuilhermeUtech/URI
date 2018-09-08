#include<stdio.h>
int main(){
	
	int entrada,tab,i;
	scanf("%d", &entrada);
	
	for(i=1; i<11; i++){
		tab = entrada*i;
		printf("%d x %d = %d\n",i, entrada,tab);
	}
	return 0;
}