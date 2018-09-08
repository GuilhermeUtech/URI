#include<stdio.h>

int main(void){
	int i,bla,nhe;
	bla = -2;
	nhe = 65;
	for(i=0; i<13; i++){
		bla = bla + 3;
		nhe = nhe - 5;
		printf("I=%d J=%d\n", bla, nhe);
	}
	
	return 0;
}