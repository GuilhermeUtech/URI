#include<stdio.h>
#include<math.h>

int main(){
	
		
	 float n[6];
	 int i,j;
	 
	 for(i=0; i<6; i++){
	 	scanf("%f", &n[i]);
	 }
	 j = 0;
	 for(i=0; i<6; i++){
	 	if(n[i] > 0){
	 		j = (j+1);
		 }
	 }
	printf("%d valores positivos\n", j);
	
	return 0;
}