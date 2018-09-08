#include<stdio.h>

int main(){
	
	int entrada[3];
	int pintar[3];
	int i,j,x;
	
	
	
	for(i = 0; i < 3; i++){
		scanf("%d", &entrada[i]);
	}
	
		for(i=0; i<3;i++){
		pintar[i] = entrada[i];
	}
	
	
	for(i=0; i<3;i++){
		for(j=0; j<i; j++){
			if(entrada[i]<entrada[j]){
				x = entrada[i];
				entrada[i] = entrada[j];
				entrada[j] = x;
			}
		}
		
	}