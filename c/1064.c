	#include<stdio.h>
	#include<math.h>
	
	int main(){
		float n[6];
		float soma,media;
		 int i,j;
		 
		 for(i=0; i<6; i++){
		 	scanf("%f", &n[i]);
		 }
		 j = 0;
		 soma = 0;
		 for(i=0; i<6; i++){
		 	if(n[i] > 0){
		 		j = (j+1);
		 		soma = soma+n[i];
		 		//j é o numero de positivos
			 }
		 }
		  media = (soma/j);
			 
			
			 printf("%d valores positivos\n", j);
			 printf("%.1f\n", media);
		 
		 
		return 0;
	}