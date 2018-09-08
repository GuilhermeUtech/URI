#include<stdio.h>

int main(){
	int x,y,i;
		
		
		for(i=0; i!= 1;){
			scanf("%d%d", &x,&y);
		
		if(x>y){
			printf("Decrescente\n");
		}
		if(x<y){
			printf("Crescente\n");
		}
		
		if(x == y){
			i = 1;
		}
	}


	return 0;
}