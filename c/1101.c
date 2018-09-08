#include<stdio.h>
#include<stdlib.h>
int main(){
	int m,n,sum,i;
	
	
	while(scanf("%d%d", &m,&n) != 0){
	sum = 0;
	if(m <= 0 || n <= 0){
		break;
	}
	if(n>m){
		for(i=m; i<n+1; i++){
			printf("%d ", i);
			sum = sum + i;
		}
	}
	
	if(m>n){
		for(i=n; i<m+1; i++){
			printf("%d ", i);
			sum = sum + i;
		}
	}
	printf("Sum=%d\n", sum);
}
	return 0;
}