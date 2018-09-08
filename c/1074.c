#include<stdio.h>

int main(){
	int n,i;
	scanf("%d", &n);
	int entrada[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &entrada[i]);
	}
	
	for(i=0; i<n; i++){
		if(entrada[i] % 2 == 0){
			if(entrada[i] > 0){
				printf("EVEN POSITIVE\n");
			} else if(entrada[i] < 0){
				printf("EVEN NEGATIVE\n");
			} else if(entrada[i] == 0){
				printf("NULL\n");
			}
		} else {
			if(entrada[i] > 0){
				printf("ODD POSITIVE\n");
			} else if(entrada[i] < 0){
				printf("ODD NEGATIVE\n");
			} else if(entrada[i] == 0){
				printf("NULL\n");
			}
			
		}
			
	}
	
	
	return 0;
}