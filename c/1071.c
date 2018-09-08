#include<stdio.h>

int main(){
	int x,y,aux;
	x = 0;
	y = 0;
	aux = 0;
	scanf("%d%d", &x, &y);
	
	if(x==y){
		printf("0\n");
	} 
	else if(x<y){
		for(x=x+1; x<y; x++){
			if(x % 2 == 1 || x % 2 == -1){
				aux+=x;
			}
		}
	}
	 else if(x>y){
		for(y=y+1; y<x; y++){
			if(y % 2 == 1 || y % 2 == -1){
				aux +=y;
			}
		}
		
	}
		printf("%d\n", aux);
	return 0;
}