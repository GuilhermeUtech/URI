#include<stdio.h>

int main(){
	int x,y,i,a;
	scanf("%d%d", &x,&y);
	
	if(x>y){
		for(i=y+1; i<x; i++){
			a = i%5;
			if(a == 2 || a == 3){
				printf("%d\n", i);
			}
		}
	} else if(y>x){
		for(i=x+1; i<y; i++){
			a = i%5;
			if(a == 2 || a == 3){
				printf("%d\n", i);
			}
		}
		} 
		
	return 0;
}