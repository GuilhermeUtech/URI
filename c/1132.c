#include<stdio.h>
int main(){
	
	int x,y,i,aux;
	scanf("%d%d", &x,&y);
	aux = 0;
	if(y>x){
		for(i=x; i<y+1; i++){
			if(i%13 != 0){
				aux = aux + i;
			} else {
				continue;
			}
		}
	}
	if(x>y){
			for(i=y; i<x+1; i++){
			if(i%13 != 0){
				aux = aux + i;
			} else {
				continue;
			}
		
	}
}
printf("%d\n", aux);
	
	return 0;
}